//wget -O - http://projecteuler.net/project/triangles.txt
main(r){float d,e,f,g,h,i,m=0,n=0;for(r=0;~scanf("%f,%f,%f,%f,%f,%f",&d,&e,&f,&g,&h,&i);)if((f-d)*(n-e)*(f=(h-f)*(n-g)-(m-f)*(i-g))>f*(m-d)*(g-e)&f*(d-h)*(n-i)>f*(m-h)*(e-i))r++;printf("%d\n",r);}