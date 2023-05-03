int INT_MAX=2147483647;
void insertsort(int *a, int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        for (j = i - 1; j >= 0 && a[j] > temp; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = temp;
        
    }
}


void merge(int *a,int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int *L=new int[n1+1];
    int *R=new int[n2+1];
    for(int i=0;i<n1;i++)
    {
        L[i]=a[p+i];
    }
    for(int i=0;i<n2;i++)
    {
        R[i]=a[q+i+1];
    }
    L[n1]=INT_MAX;
    R[n2]=INT_MAX;
    int i=0,j=0;
    for(int k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
    }
    delete[] L;
    delete[] R;
}
void mergeSort(int *a,int p,int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        mergeSort(a,p,q);
        mergeSort(a,q+1,r);
        merge(a,p,q,r);
    }
}