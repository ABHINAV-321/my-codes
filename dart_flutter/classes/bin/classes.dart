import 'package:classes/classes.dart' as classes;
import 'package:test/test.dart';
class Person{
final int? age;
final String name;
Person(this.name,this.age){
 //String name =int.toString();
  String ageS = "$age";
  print(name + ageS);
}
}
void main(List<String> arguments) {
  final person =Person('abhi ', 9);
}
// Person.name='abhinav';