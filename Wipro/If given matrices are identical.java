// check if given 2 matrices are identical
public class Main
{	
 static void matrix_checker(int[][] mat1,int[][] mat2,int flag)
  {
      int i,j;
      outerloop:
      for(i=0;i<3;i++) {
        for(j=0;j<3;j++)
        {
          if(mat1[i][j]!=mat2[i][j])
          {
            flag=1;
            break outerloop;
          }
        }
      }
      if(flag==0)	{
        System.out.println("Matrix is identical"); }
      else{
        System.out.println("Matrix is not identical");}
	}
  public static void main(String[] args)
	{
      int flag=0;
      int[][] mat1 = {{1,2,3},{4,5,6},{7,8,9}};
      int[][] mat2 = {{1,2,3},{4,5,6},{7,8,99}};
      matrix_checker(mat1,mat2,flag);
	}
}
