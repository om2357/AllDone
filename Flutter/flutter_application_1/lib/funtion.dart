void main() {
  print("welcome");

  var myC = myClass();
  myC.printName("Om");
  myC.printName("dart");
  myC.printName("flutter");

  myC.Add(4, 4);
  print(myC.Add(4, 4));
}

class myClass {
  void printName(String name) {
    print(name);
  }

  int Add(int a, int b) {
    int sum = a + b;
    return sum;
  }
}
