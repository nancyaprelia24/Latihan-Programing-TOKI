int main()
{
  int hasil=1,bil;
  printf("Masukkan bilangan faktorial: ");
  scanf(" %d",&bil);
  int i;
  for(i=1;i<=bil;i++)
    {
  hasil=i*hasil;
  }
  printf("faktorial dari %d! adalah  = %d\n",bil,hasil);
  printf(" %d",i);

}
