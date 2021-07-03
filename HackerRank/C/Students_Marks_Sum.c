

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) 
{
  //Write your code here.
  int i,b_marks=0,g_marks=0;
  
  for(i=0;i<number_of_students;i++)
  {
      if(i%2==0)
        b_marks+=marks[i];
      else
        g_marks+=marks[i];
  }
  if(gender=='b')
    return b_marks;
  else 
    return g_marks;
  
}

