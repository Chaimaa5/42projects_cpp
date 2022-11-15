#include "Form.hpp"

Form::Form():sign(0), s_Grade(0), e_Grade(0){

}

Form::Form(std::string Name, int s_Grade, int e_Grade): Name(Name), sign(0), s_Grade(s_Grade), e_Grade(e_Grade){
    if (s_Grade >= 150 || e_Grade >= 150)
        throw (GradeTooLowException());
    if (s_Grade <= 1 || e_Grade <= 1)
        throw (GradeTooHighException());
}
Form::~Form(){

}

Form::Form(Form const & F): Name(F.Name), sign(0), s_Grade(F.s_Grade), e_Grade(F.e_Grade){
    (*this) = F;
}

Form & Form::operator=(Form const & F){
    this->sign = F.sign;
    return (*this);
}

bool    Form::beSigned(Bureaucrat & B){
    if (B.getGrade() <= 0)
        sign = 1;
        return true;
    if (B.getGrade() >= 150)
        throw (GradeTooLowException());
}

const char *Form::GradeTooHighException::what() const throw(){
	return ("Terminating with catched Exception: Grade Too High.");
}

const char *Form::GradeTooLowException::what() const throw(){
    	return ("Terminating with catched Exception: Grade Too Low.");
}

const std::string Form::getName(){
    return (Name);
}

int Form::getSign(){
    return (sign);
}

int Form::getSGrade(){
    return (s_Grade);
}

 int Form::getEGrade(){
    return (e_Grade);
}

std::ostream & operator<<(std::ostream & os, Form & F){
    os << F.getName() << ", Form e_Grade: " << F.getEGrade() << ", s_Grade: " << F.getSGrade() << ", Sign: " << F.getSign() << std::endl;
    return (os);
}