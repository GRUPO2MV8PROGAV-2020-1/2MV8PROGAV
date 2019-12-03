
%fileID = fopen('workspace.txt','r');
%formatSpec = '%f';
%A = fscanf(fileID,formatSpec)


%x = 1:1:5;
%y = [x;rand(1,5)];
%fileID = fopen('workspace.txt','w');
%fprintf(fileID,'%d %4.4f\n',y);
%fclose(fileID);


fileID = fopen('workspace.txt','r');
formatSpec = '%d %f';
sizeA = [1 Inf];
A = fscanf(fileID,formatSpec,sizeA)

a = A(1,2);
b = A(1,3); 
c = A(1,4);

d = A(1,6);
e = A(1,7);
f = A(1,8);

x = 0:.1:10;
y1 = a + b*x + c*x.^2;
y2 = d + e*x + f*x.^2;

plot(x,y1,x,y2)