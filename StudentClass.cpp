Class Student {

 public :
   
   int id;
   string name ;
   double percentage;
   vector<string> skills ;
  

   Student() {
   }
   
   Student(int id , string name ) {
      
        this->id = id ;
        this -> name = name ;
    }
    Student(int id , string name , double percenatge, vector<string> skills) {
      
        this -> id = id;
        this -> name = name;
        this -> percentage = percentage ;
        for(int i=0 ; i<skills.size(); i++) {
            
            this->skills.push_back(skills[i]);
        }
    }

   void setID(int id) {
      
       this->id = id ;
   }
   
   int getId() {
     
     return id ;
   }
   
    void setName(string name ) {
      
       this->name = name ;
   }
   
   string getId() {
     
     return name;
   }

   void setPercentage(double percentage) {
      
       this->percentage = percentage ;
   }
   
   double getPercentage() {
     
     return percentage ;
   }
  
   void setSkills(vector<string> skills) {

      this->skills.clear();
       for(int i=0 ; i<skills.size(); i++) {
            
             this->skills.push_back(skills[i]);
        }
   }
   
   vector<string> getSkills() {
     
     return skills ;
   }
};