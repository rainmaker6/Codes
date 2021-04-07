
a=14
b=a*10
print(c(a,b))
rm(a)
rm(list=ls())
save(a,file="rew.Rdata")#to save single variable a
save(list=ls(all.names=TRUE),file="rew.Rdata")#to save a full workspace with specified file name
save.image()#save whole workspace 
load(file="rew.Rdata")#to load saved workspace
typeof(1)
typeof(("22-01-2001"))
is.charater("21-11-2001")
is.character(as.Date("21-11-2001"))
as.Complex(2)#to convert integer to a complex number
as.numeric("a")#to convert character to a number
X=c(2.4,3.6,3.7,5.8)
print(X)
Id=c(1,2,3,4)
emp.name=c("Man","Rag","Sha","Din")
num.emp=4
emp.list=list(Id,emp.name,num.emp)
print(emp.list)
emp.list=list("Id"=Id,"Names"=emp.name,"Total staff"=num.emp)
print(emp.list$Names)
print(emp.list[[1]])
print(emp.list[[2]])
print(emp.list[[2]][1])
print(emp.list[[1]][1])
emp.list["Toal staff"]=5
emp.list[[2]][5]="Nir"
emp.list[[1]][5]=5
print(emp.list)
emp.ages=list("ages"=c(23,43,43))
emp.list=c(emp.list,emp.list)
print(emp.list)
vec1=c(1,2,3)#How to create a data frame
vec2=c("R","Scilab","Javafucks")#character vector
vec3=c("For prototyping","For prototyping","For Scaleup")
df=data.frame(vec1,vec2,vec3)#create dataframes
newDf=read.table(path="Path of the file")#creatin a data frame using data from file
newDf=read.table(path="Path of the file",sep)#can be tab or a comma
df[val1,val2]
df[val2]
print(df[1:2,])#accessing first and second row
print(df[,1:2])#acessing first and second column
print(df[1:2])#acessing first and second column
print(df)
pd=data.frame("Name"=c("Senthil","Senthil","Sam","Sam"),"Month"=c("Jan","Feb","Jan","Jan"),"BS"=c(130.3,342.2,241.3,243.3),"BP"=c(34,56,345,23))
pd2=subset(pd,Name=="Senthil"|BS>150)
print("new subset pd2")
print(pd2)
vec1=c(1,2,3)#How to create a data frame
vec2=c("R","Scilab","Javafucks")#character vector
vec3=c("For prototyping","For prototyping","For Scaleup")
df=data.frame(vec1,vec2,vec3)#create dataframes
print(df)
df[[2]][2]="R"#editing dataframe directly
my.Table=data.frame()
myTable=edit(myTable)
df=rb
df=rbind(df,data.frame(vec1=4,vec2="C",vec3="For Scaleup"))
print("addidng extra row")
print(df)
df=cbind(df,vec4=c(12,34,53,23))
print("adding extra column")
print(df)
df2=df[-3,-1]
print(df2)
df3=df[,!names(df)%in%c("vec3")]
print(df3)
df4=df[!df$vec1==3,]
print(df4)
#manuplitaing rows in data frame
#continued from previous page
df[3,1]=3.1
df[3,3]="Others"
print(df)
vec1=c(1,2,3)#How to create a data frame
vec2=c("R","Scilab","Javafucks")#character vector
vec3=c("For prototyping","For prototyping","For Scaleup")
df=data.frame(vec1,vec2,vec3,stringAsFactor=F)#create dataframes
df[3,3]="Others"
print(df) 
pd=data.frame("Name"=c("Senthil","Senthil","Sam","Sam"),"Month"=c("Jan","Feb","Jan","Feb"),"BS"=c(234.,22.3,34.3,25.2),"BP"=c(23,34,564,45))
#melt(data id.vars,measure.vars,variable.name="variable",value.name="value")
library(reshape2)
Df=melt(pd,vars=c("Name","Month"),measure.vars=c("BS","BP"))
print(Df)
Df2=dcast(Df,variable+month~Name,value.var="value")
recast(pd,variable+Month~Name,id.var=c("Name","Month"))
#variable+Month~Name-cast section
#id.var=c("Name","Month")-melt section
library(dplyr)
pd2<-mutate(pd,log_BP=log(BP))
#orignal dataframe pd is the first argument
#multiple variables can be created as transformation of older variables
#Log_BP is the new column which is the log of BP
print(pd2)
#commmon syntax for dplyr functions used to combine dataframes
#function(dataframe1,dataframe2,by=id.variable)
#the id.variable is common to both dataframes
#this variable provides the identifiers for combining the 2
#the nature of combination depends on the type of function used 
#dplyr library ahs following functions
#left_joint(),full_joint right,semi,inner,anti joints
pd=data.frame("Name"=c("Senthil","Senthil","Sam","Sam"),"Month"=c("Jan","Feb","Jan","Feb"),"BS"=c(23,34,56,22),"BP"=c(345.3,345.3,345.34,346.4))
pd_new=data.frame("Name"=c("Senthil","ramesh","sam"),"Dept"=c("PSE","data Anal","PSE"))
print(pd_new)
#joining dataframe 1 and 2 based on id.variable
#it will take the matching rows from dataframe 2 to the dataframe 1
library(dplyr)
pd_left_join<-left_join(pd,pd_new,by="Name")
print(pd_left_join1)
pd_right_joint<-right_join(pd,pd_new,by="Name")
print(pd_right_join1)
pd_inner_join1<-inner_join(pd_new,pd,by="Name")
print(pd_inner_join1)
#merges and retains those rows with ids present in both dataframes'
A=matrix()
A=matrix(c(1,2,3,4,5,6,7,8,9))
A=matrix(c(1,2,3,4,5,6,7,8,9),nrow=3,ncol=3,byrow=TRUE)
#byrow=TRUE decides how the value in the vector would be assigned
#default r arranges in a coloumn fashion
#create all rows and coloumn witha single constant
matrx(3,m,n)
#diagnol matrix m rows n columns k value to diagnol
diag(k,m,n)
A=matrix(c(1,2,3,4,5,6,7,8,9),nrow=3,ncol=3,byrow=TRUE)
dim(A)#returns size of matrix
nrow(A)#returns number of rows
ncol(A)#returns number of columns
prod(dim(A))orlength(A)#returns the number of elements
#array value before , for accessing rowsand after , used to access columns
#use - foe=r removing rows/columns
#strings can be assigned as names of rows and columns using rownames()and Colnames()
A[2,3]#part before the comma is row no and after column number
#accsesing columns
A[,1]
#acessing rows
A[1,]
#acess last row
A[nrow(A),]
#acess everithing leaving a colmn
print(A[,-2])#same in rows but comma ka chakkar hai
#colon operator(:) can be used to create a row matrix
1:10#used to create an array of elements with equal width
#print 10 digits upto 10 with gap of 1
10:1#print 10 to 1 with a gap of 1
#can be used to acess sub matrices
#concatination(merge) of a column matrix is done using cbind() and for row rbind()
#constincy(number of rows of mattix should match)of the dimensions b/w te matrix should be chcecked before concatination
rbind(A,B)
cbind(A,B)
#deleting a column
A=A[,-2]
#deleting rows
A=A[-2,]
#addition
#%*% performs regular matrix multiplication
A/B#every elemet wise division
#functions are created using command function()
#f=function(arguments){statements}
volcylinder=function(dia=5,len=100)
{
  vol=pi*dia^2*len/4
  return(vol)
}
v=volcylinder(5,10)
v=volcylinder(len=100,dia=6)
#if no value si passed the default values are used
result=list("volume"=volume,"surface_area"=surface_area)
return(result)
result=volcylinder_mimo(10,5)
result["volume"]
result["surface_area"]
#inline function
func=function(x)x^2+4*x+4
func(1)#prints value of function
func(2)
#looping over objects
#apply apply functions over the margins of an array or matrix
#lapply apply function over a list  or a vector/always returns a list of the same length as the input
#tapply apply function over a ragged value
#mapply multivariate version of lapply
#xxply (plyr package)
#apply(array,margins,function)
apply(A,1,sum)
apply(A,2,sum)
#lapply
A=matrix(1:9,3,3)#having elements from 1 to 9 and size 3x3
B=matrix(10:18,3,3)
Mylist=list(A,B)
determinant=lapply(Mylist,det)
#mapply a function that can be applied ovr several list simultaneously
#mapply(fun,list1,list2)
dai=list(1,2,3,4)
len=list(7,4,3,2)
vol=mapply(volcylinder,dia,len)
vol
#tapply used t apply a fuction over a subset of vectors given  by a combination of vectors
#tapply(vector,factor,function)
id=c(1,1,1,1,2,2,2,3,3)
values=c(1,2,3,4,5,6,7,8,9)
tapply(values,Id,sum)
#control structures
#commands only when certain conditions are satisfied
#repeteadly execution like loops
#if(condition)
{
  #statements
}
#same as in c++
#a sequence is one of the components of a for loop
seq(from,to,by,length)
#creates a equi spaces points b/w from and to
# from starting no,to ending number,by increment or decrement by length no of elements required
#forloop a sequence which could be a vector or a list
#iter is an element of the sequence
#for(iter in sequence)
{
  #statements
}
#for(iter1 in sequence) iter values i,j etc
{#for(iter2 in sequence)
  {
    #statements
  }
  
}
n=5
sum=0
for(i in seq(1,n,1))
{
  sum=sum+i
print(c(i,sum))
if(sum>15)
{
  break
}
}
#whileloop
sum=0
i=0
Fin_sum=15
while(sum<Fin_sum)
{
  i=i+1
  sum=sum+i
print(c(i,sum))  
}
#scatter plot points plotted
X=1:10
Y=X^2
plot(Y)
#scatter plot b/w wt and mtg
plot(mtcars$wt,mtcars$mpg,main="Sactterplot Example",xlab="Car Weight",ylab="Miles per Gallon",pch=19)
#main-title of graph
#pch corresponds to different shapes for points check graphics parameters in help for more info
#line plot
X=1:10
Y=X^2
plot(X,Y,type='l')
#bar plot
#barplot(H,names.arg,xlab,ylab,main,names.arg,col)
H<-c("3","45","54","56","45")
M<-c("Mar","Apr","Jun","Jan","Oct")
barplot(H,names.arg=M,xlab="Month",ylab="Revenue",col="blue",maon="revenue chart",border="red")
par(mfrow=c(2,4))
days<-c("Thur","Fri","Sat","Sun")
sexes<-unique(tips$sex)
for(i in 1:length(sexes))
{
  {
    for(j in 1:length(days))
      
    {
      
      currdata<-tips[tips$day==days[j]&tips$sex==sexes[i],]
      plot(currdata$total_bill,currdata$tip/currdata$total_bill,main=paste(days[j],sexes[i],sep=",",ylim=c(0,0.7),las=1))
    }
  }
}
  #ggplot2
A=matrix(c(1,2,3,2,3,4,6,1,0,0),ncol=3,byrow=F)
library(pracma)
column=ncol(A)
rank=Rank(A)#to find rank of the  matrix
nulity=column-rank
print(column)
print(rank)
print(nulity)
#matrix multilication
A=matrix(c(1,2,3,0,0,1),ncol=2,byrow=F)
b=matrix(c(1,2,5),ncol=2,byrow=F)
x=inv(t(A)%*%A)%*%t(A)%*%b
x=inv(t(A)%*%A)%*%t(A)%*%b
x
x=inv(t(A)%*%A)%*%t(A)%*%b
x
A=matrix(c(1,0,2,0,3,1),ncol=3)
b=c(2,1)
library(MASS)
x=t(A)%*%inv(A%*%t(A))%*%b
x
x=ginv(A)%*%b#generalised inverse of A
#orthogonal
v1=c(1,2,4)
v2=c(2,5,2)
N=t(v1)%*%v2
#eigen values
A=matrix(c(8,7,2,3),2,2,byrow=TRUE)
ev=eigen(A)
values=ev$values
vectors<-ev$vectors
vectors
#eigen vectors generallyexpressed in unit vector form
#computation of prob using R
#fxn to compute the prob of a given value X
#lower tail prob =p(-x<x<X)=integration lim - infinity to X f(x)dx
pnorm(X,mean,std,'lower.tail'=TRUE/FALSE)
#norm refers to distribution and can be replaces by other distriburtions (chisq,exp,unif)
#Xis the value (limit)\
#parameters of distributions 
#lower.tail=TRUE(default) to obtain lower tail probability and FALSE to obtail upper tail probability
#fxn to compute  X given probsbility  p
qnorm(p,mean,std,'lower.tail'=TRUE/FALSE)
#p is the probability
#inverse probability ie we gives probability and asks for the limits.
#fxn dnorm is used to compute density value function
#fxn r norm used to genrate random nos from the distribution


read.delim(file,row.names=1)#to load data from the file delim
bonds<-read.delim("bonds.txt",row.names = 1)
View(bonds)#bonds is the dataframe for the file
head(bonds)
tail(bonds)
str(bonds)#input is a data frame 
summary(bonds)
plot(bonds$CouponRate,bonds$BidPrice,
     main="Bid Price vs Coupon Rate",
     xlab="Coupon Rate",
     ylab="Bid Price")
abline(bondsmod)#use to fit regression line over the plot
lm(formula,data)#building a linear model
#lm(dependent var~independent var)
bondsmod<-lm(bonds$BidPrice~bonds$CouponRate)# to build a linear model
bondsmod<-lm(BidPrice~CouponRate,data=bonds)# to build a linear model
alpha=0.05 
n=35#no pof observations
p=1#no of independent variables
qt(p=1-(alpha/2),df=n-p-1)#crtitical value/computing quantiles from t distributions 
SSE<-sum((bonds&BidPrice-bondsmod$fitted.values)^2)
SSE
SSR<-sum((bondsmod$fitted.values-mean(bonds$BidPRice))^2)
SSR
n=35
(SSR/SSE)*(n-2)
plot(bomdsmod$fitted.values,rstandard(bondsmod),
     main="residual Plot",
     xlab="Predicted Values for Bid Price",
     ylab="Standardized Residuals")
abline(h=2,lty=2)
abline(h=-2,lty=2)
identify(bondsmod$fitted.values,rstandard(bondsmod))
bods_new<-bonds[-13,]
bondsmod1<-lm(bonds_new$BidPrice~
                bonds_new$CouponRate)
plot(bonds$CouponRate[-c(4,13,34,35)],#removed points
     bonds$BidPrice[-c(4,13,34,35)],
     main="Bid Price vs Coupon Rate without outliers",
     xlab="Coupon Rate",
     ylab="Bid Price")
abline(bondsmod1)#new linear model after removing outliers

library(caret)#for confusion matrix
rm(list=ls())#clear the environment
glm(formula,data,family)#generalised linear model
logisfit<-glm(formula=crashTest_1$CarType~.,family='binomial',data=crashTest_1)
predict(object)
knn(train,test,cl,k=1)
#train matrix or data frame of training set cases
#test matrix or data frame of test set cases.Avector will be interpreted as a row vector for a single case
#cl factor of true classifications of training set
#k no. of neighbours considered
conf_matrix=table(predictedknn,ServiceTest[,6])
knn_accuracy=sum(daig(conf_matrix))/nrow(ServiceTest)
COnf_Matrix<-confusionMatrix(data=predictedknn,ServiceTest$Service)
