import 'dart:io';

void main() {
  print("Hello om");
  //stdout.write("Enter your name");
  // var name = stdin.readLineSync();
  // print("Welcome, $name");

  int? a;

  print(a);
  a = 7;
  print(a);
  a = 10;
  print(a);

  //inline declaration

  String name = "Om Kumar";
  print(name);

  BigInt longValue;
  longValue = BigInt.parse('28332373923924692');
  print(longValue);

  double percentage = 99.23;
  bool isLogin = false;

  var subject = "Maths";
  subject = "32";
  print(subject);
}

class human {
  human(); //default constructer
}
