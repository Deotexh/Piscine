int ft_iterative_factorial(int nb)
{
  int result;

  if (nb < 0)
    return (0);
  else if (nb == 0)
    return (1);

  result = nb;
  nb--;
  while (nb > 0)
  {
    result *= nb;
    nb--;
  }
  return (result);
}
