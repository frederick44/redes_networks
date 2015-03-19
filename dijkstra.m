clc;
clear;
[num port raw]=xlsread('prueba.xlsx');
pin=cell2mat(port); % pasa los puertos a una matriz



k=size(pin); %determina el numero de enlaces

enlaces=zeros(10); % suponiendo que el numero de nodo no excedara a 10

fuente=pin(:,1)';  %Se convitió en renglón el conjunto de fuentes de la matriz de costos
destino=pin(:,2)'; %Se convitió en renglón el conjunto destino de la matriz de costos

for(t=1:1:10)
    
    for(l=1:1:10) %Barrer la matriz y se asignan valores inf y -inf
    enlaces(t,l)=Inf;
    end
    enlaces(t,t)=-Inf;
    
end


for(i=1:1:length(fuente))   % se vacia el los costos en la matriz de enlaces 
enlaces(abs(fuente(i))-96,abs(destino(i))-96)=num(i);
enlaces(abs(destino(i))-96,abs(fuente(i))-96)=num(i);

end

 d=min(abs(enlaces),[],1); %minimo columnas de matriz
 
 l=length(d); % Saca longitud de toda la matriz
 c=0;
 
for r=1:l %r variable para ir indexando
    
    if d(r)<Inf %Agarra valores de 'd' y ve si es menor a infinito
        c=c+1;
    end
end
distancias=zeros(c);

for x=1:c %C es el número de nodos tiene que ser cuadrada
    for y=1:c
        distancias(x,y)=enlaces(x,y); %El enlace son los pesos
        if x==y
        distancias(x,y)=0;
    end
    
    end
    
end

a=input('dame la fuente \n','s');
s=abs(a)-96;
n=size(distancias,1);

for j=1:n
h=[1:n];

 
S(1:n) = 0; % vector de nodos visitados 
dist(1:n) = inf; % almacena la distancia mas corta entre la fuente y un nodo 
prev(1:n) = n+1;  % nodos previos, informa sobre el mejor nodo previo conocido
 

dist(s) = 0; %Distancia Fuente

while sum(S)~=n %ya trabaje con el

    candidato=[]; 

    for i=1:n 
        if S(i)==0 
            candidato=[candidato dist(i)]; % 
        else            
            candidato=[candidato inf];
        end        
    end
    
    [valor u]=min(candidato); % u es el renglón
    S(u)=1; 
    
    for i=1:n 
        if distancias(u,i)>0 % se ignoran los costos 0 y negativos
            if(dist(u)+distancias(u,i))<dist(i) %Distancia fuente + distancia de la fuente a un nodo es menor se guarda
                dist(i)=dist(u)+distancias(u,i); %Hasta que se cunple la regla se refrescan los datos
                prev(i)=u;
            end            
        end        
    end    
end


costo = dist(h(j)); %Arroja los valores de costo
letra=char(96+h(j));
fprintf('destino %s  costo %d \n',letra ,costo)




end


   
    

   




