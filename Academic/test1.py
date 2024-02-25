from tkinter import*
from PIL import Image,ImageTk
from tkinter import ttk
import mysql.connector
from tkinter import messagebox

class PharmacyManagementSystem:
    def _init_(self,root):
        self.root=root
        self.root.title("Pharmacy Management System")
        self.root.geometry("1550x800+0+0")


        #####################AddMed Variable############################################

        self.addMed_var=StringVar()
        self.refMed_var=StringVar()


        lbltitle=Label(self.root,text="PHARMACY MANAGEMENT SYSTEM",bd=15,relief=RIDGE,
                       bg='white',fg="darkgreen",font=("times new roman",50,"bold"),padx=2,pady=4)
        lbltitle.pack(side=TOP,fill=X)

        img1=Image.open("1.jpg")
        img1=img1.resize((80,80),Image.LANCZOS)
        self.photoimg1=ImageTk.PhotoImage(img1)
        b1=Button(self.root,image=self.photoimg1,borderwidth=0)
        b1.place(x=70,y=20)

        ####################DATA FRAME LEFT##############################
   
        DataFrame=Frame(self.root,bd=15,relief=RIDGE,padx=20)
        DataFrame.place(x=0,y=120,width=1530,height=400)

        DataFrameLeft=LabelFrame(DataFrame,bd=10,relief=RIDGE,padx=20,text="Medicine Information",
                                 fg="darkgreen",font=("arial",12,"bold"))
        DataFrameLeft.place(x=0,y=5,width=900,height=350)

###########################BUTTON FRAME######################################
        ButtonFrame=Frame(self.root,bd=15,relief=RIDGE,padx=20)
        ButtonFrame.place(x=0,y=520,width=1530,height=65)

############################MAIN BUTTON#################################
        btnAddData=Button(ButtonFrame,text="Medicine Add",font=("arial",12,"bold"),width=14,bg="darkgreen",fg="white")
        btnAddData.grid(row=0,column=0)

        btnUpdateMed=Button(ButtonFrame,text="Update",font=("arial",13,"bold"),width=14,bg="darkgreen",fg="white")
        btnUpdateMed.grid(row=0,column=1)

        btnDeleteMed=Button(ButtonFrame,text="Delete",font=("arial",13,"bold"),width=14,bg="red",fg="white")
        btnDeleteMed.grid(row=0,column=2)

        btnRestMed=Button(ButtonFrame,text="Reset",font=("arial",13,"bold"),width=14,bg="darkgreen",fg="white")
        btnRestMed.grid(row=0,column=3)

        btnExitMed=Button(ButtonFrame,text="Exit",font=("arial",13,"bold"),width=14,bg="darkgreen",fg="white")
        btnExitMed.grid(row=0,column=4)

####################################SEARCH BY##############################################
        lblSearch=Label(ButtonFrame,font=("arial",17,"bold"),text="Search By",padx=2,bg="red",fg="white")
        lblSearch.grid(row=0,column=5,sticky=W)

        search_combo=ttk.Combobox(ButtonFrame,width=12,font=("arial",17,"bold"),state="readonly")
        search_combo["values"]=("Ref","Medname","Lot")
        search_combo.grid(row=0,column=6)
        search_combo.current(0)

        txtSearch=Entry(ButtonFrame,bd=3,relief=RIDGE,width=12,font=("arial",17,"bold"))
        txtSearch.grid(row=0,column=7)

        SearchBtn=Button(ButtonFrame,text="Search",font=("arial",13,"bold"),width=11,bg="darkgreen",fg="white")
        SearchBtn.grid(row=0,column=8)

        showAll=Button(ButtonFrame,text="Show All",font=("arial",13,"bold"),width=11,bg="darkgreen",fg="white")
        showAll.grid(row=0,column=9)

##########################  LABEL AND ENTRY  ################################
        
        lblrefno=Label(DataFrameLeft,font=("arial",12,"bold"),text="Reference No",padx=2)
        lblrefno.grid(row=0,column=0,sticky=W)

        ref_combo=ttk.Combobox(DataFrameLeft,width=27,font=("arial",12,"bold"),state="readonly")
        ref_combo["values"]=("Ref","Medname","Lot")
        ref_combo.grid(row=0,column=1)
        ref_combo.current(0)

        lblCmpName=Label(DataFrameLeft,font=("arial",12,"bold"),text="Company Name",padx=2,pady=6)
        lblCmpName.grid(row=1,column=0,sticky=W)
        txtCmpName=Entry(DataFrameLeft,font=("arial",12,"bold"),bg="white",bd=2,relief=RIDGE,width=29)
        txtCmpName.grid(row=1,column=1)

        lblTypesofMedicine=Label(DataFrameLeft,font=("arial",12,"bold"),text="Types Of Medicine",padx=2,pady=6)
        lblTypesofMedicine.grid(row=2,column=0,sticky=W)

        comTypeofMedicine=ttk.Combobox(DataFrameLeft,width=27,font=("arial",12,"bold"),state="readonly")
        comTypeofMedicine["values"]=("Tablet","Liquid","Capsules","Topical Medicines","Drops","Inhales","Injection")
        comTypeofMedicine.grid(row=2,column=1)
        comTypeofMedicine.current(0)

        ################################# ADD MEDICINE ########################################################

        lblMedicineName=Label(DataFrameLeft,font=("arial",12,"bold"),text="Medicine Name",padx=2,pady=6)
        lblMedicineName.grid(row=3,column=0,sticky=W)

        comMedicineName=ttk.Combobox(DataFrameLeft,width=27,font=("arial",12,"bold"),state="readonly")
        comMedicineName["values"]=("Nice","Novel")
        comMedicineName.grid(row=3,column=1)
        comMedicineName.current(0)

        lblLotNo=Label(DataFrameLeft,font=("arial",12,"bold"),text="lot No:",padx=2,pady=6)
        lblLotNo.grid(row=4,column=0,sticky=W)
        txtLotNo=Entry(DataFrameLeft,font=("arial",12,"bold"),bg="white",bd=2,relief=RIDGE,width=29)
        txtLotNo.grid(row=4,column=1)

        lblIssueDate=Label(DataFrameLeft,font=("arial",12,"bold"),text="Issue Date:",padx=2,pady=6)
        lblIssueDate.grid(row=5,column=0,sticky=W)
        txtIssueDate=Entry(DataFrameLeft,font=("arial",12,"bold"),bg="white",bd=2,relief=RIDGE,width=29)
        txtIssueDate.grid(row=5,column=1)

        lblExDate=Label(DataFrameLeft,font=("arial",12,"bold"),text="Exp Date:",padx=2,pady=6)
        lblExDate.grid(row=6,column=0,sticky=W)
        txtExDate=Entry(DataFrameLeft,font=("arial",12,"bold"),bg="white",bd=2,relief=RIDGE,width=29)
        txtExDate.grid(row=6,column=1)

        lblUses=Label(DataFrameLeft,font=("arial",12,"bold"),text="Uses:",padx=2,pady=6)
        lblUses.grid(row=7,column=0,sticky=W)
        txtUses=Entry(DataFrameLeft,font=("arial",12,"bold"),bg="white",bd=2,relief=RIDGE,width=29)
        txtUses.grid(row=7,column=1)

        lblSideEffects=Label(DataFrameLeft,font=("arial",12,"bold"),text="Side Effects:",padx=2,pady=6)
        lblSideEffects.grid(row=8,column=0,sticky=W)
        txtSideEffects=Entry(DataFrameLeft,font=("arial",12,"bold"),bg="white",bd=2,relief=RIDGE,width=29)
        txtSideEffects.grid(row=8,column=1)

        lblPrecWarning=Label(DataFrameLeft,font=("arial",12,"bold"),text="Prec&Warning:",padx=2,pady=6)
        lblPrecWarning.grid(row=0,column=2,sticky=W)
        txtPrecWarning=Entry(DataFrameLeft,font=("arial",12,"bold"),bg="white",bd=2,relief=RIDGE,width=29)
        txtPrecWarning.grid(row=0,column=3)

        lblDosage=Label(DataFrameLeft,font=("arial",12,"bold"),text="Dosage:",padx=2,pady=6)
        lblDosage.grid(row=1,column=2,sticky=W)
        txtDosage=Entry(DataFrameLeft,font=("arial",12,"bold"),bg="white",bd=2,relief=RIDGE,width=29)
        txtDosage.grid(row=1,column=3)

        lblPrice=Label(DataFrameLeft,font=("arial",12,"bold"),text="Tablets Price:",padx=2,pady=6)
        lblPrice.grid(row=2,column=2,sticky=W)
        txtPrice=Entry(DataFrameLeft,font=("arial",12,"bold"),bg="white",bd=2,relief=RIDGE,width=29)
        txtPrice.grid(row=2,column=3)

        lblProductQt=Label(DataFrameLeft,font=("arial",12,"bold"),text="Product QTs:",padx=2,pady=6)
        lblProductQt.grid(row=3,column=2,sticky=W)
        txtProductQt=Entry(DataFrameLeft,font=("arial",12,"bold"),bg="white",bd=2,relief=RIDGE,width=29)
        txtProductQt.grid(row=3,column=3)

###############################IMAGES#################################
        
        lblhome=Label(DataFrameLeft,font=("arial",12,"bold"),text="Stay Home Stay Safe",padx=2,pady=6,bg="white",fg="red")
        lblhome.place(x=555,y=140)

        img2=Image.open("2.jpg")
        img2=img2.resize((150,135),Image.LANCZOS)
        self.photoimg2=ImageTk.PhotoImage(img2)
        b1=Button(self.root,image=self.photoimg2,borderwidth=0)
        b1.place(x=770,y=330)

        img3=Image.open("3.jpg")
        img3=img3.resize((150,135),Image.LANCZOS)
        self.photoimg3=ImageTk.PhotoImage(img3)
        b1=Button(self.root,image=self.photoimg3,borderwidth=0)
        b1.place(x=620,y=330)

        img4=Image.open("4.jpg")
        img4=img4.resize((150,135),Image.LANCZOS)
        self.photoimg4=ImageTk.PhotoImage(img4)
        b1=Button(self.root,image=self.photoimg4,borderwidth=0)
        b1.place(x=485,y=330)

    #########################DATAFRAME RIGHT ##################################
        
        DataFrameRight=LabelFrame(DataFrame,bd=10,relief=RIDGE,padx=20,text="Medicine Add Department",
                                 fg="darkgreen",font=("arial",12,"bold"))
        DataFrameRight.place(x=910,y=5,width=540,height=350)

        img5=Image.open("5.jpg")
        img5=img5.resize((200,90),Image.LANCZOS)
        self.photoimg5=ImageTk.PhotoImage(img5)
        b1=Button(self.root,image=self.photoimg5,borderwidth=0)
        b1.place(x=960,y=160)

        img6=Image.open("6.jpg")
        img6=img6.resize((200,90),Image.LANCZOS)
        self.photoimg6=ImageTk.PhotoImage(img6)
        b1=Button(self.root,image=self.photoimg6,borderwidth=0)
        b1.place(x=1160,y=160)

        img7=Image.open("7.jpg")
        img7=img7.resize((200,90),Image.LANCZOS)
        self.photoimg7=ImageTk.PhotoImage(img7)
        b1=Button(self.root,image=self.photoimg7,borderwidth=0)
        b1.place(x=1270,y=160)

        lblrefno=Label(DataFrameRight,font=("arial",12,"bold"),text="Reference No:")
        lblrefno.place(x=0,y=95)
        txtrefno=Entry(DataFrameRight,textvariable=self.refMed_var,font=("arial",12,"bold"),bg="white",bd=2,relief=RIDGE,width=14)
        txtrefno.place(x=135,y=95)

        lblmedName=Label(DataFrameRight,font=("arial",12,"bold"),text="Medicine Name:")
        lblmedName.place(x=0,y=125)
        txtmedName=Entry(DataFrameRight,textvariable=self.addMed_var,font=("arial",12,"bold"),bg="white",bd=2,relief=RIDGE,width=14)
        txtmedName.place(x=135,y=125)

        ##################SIDE FRAME##########################

        side_frame=Frame(DataFrameRight,bd=4,relief=RIDGE,bg="white")
        side_frame.place(x=0,y=165,width=270,height=150)

        sc_x=ttk.Scrollbar(side_frame,orient=HORIZONTAL)
        sc_x.pack(side=BOTTOM,fill=X)

        sc_y=ttk.Scrollbar(side_frame,orient=VERTICAL)
        sc_y.pack(side=RIGHT,fill=Y)

        self.medicine_table=ttk.Treeview(side_frame,column=("ref","medname"),xscrollcommand=sc_x.set,yscrollcommand=sc_y.set)

        sc_x.config(command=self.medicine_table.xview)
        sc_y.config(command=self.medicine_table.yview)

        self.medicine_table.heading("ref",text="Ref")
        self.medicine_table.heading("medname",text="Medicine Name")

        self.medicine_table["show"]="headings"
        self.medicine_table.pack(fill=BOTH,expand=1)

        self.medicine_table.column("ref",width=100)
        self.medicine_table.column("medname",width=100)

        ######################### MEDICINE ADD BUTTON#######################

        down_frame=Frame(DataFrameRight,bd=4,relief=RIDGE,bg="darkgreen")
        down_frame.place(x=330,y=165,width=135,height=150)

        btnAddmed=Button(down_frame,text="ADD",font=("arial",12,"bold"),width=12,bg="lime",fg="white",pady=4 ,command=self)
        btnAddmed.grid(row=0,column=0)

        btnUpdatemed=Button(down_frame,text="UPDATE",font=("arial",12,"bold"),width=12,bg="purple",fg="white",pady=4)
        btnUpdatemed.grid(row=1,column=0)

        btnDeletemed=Button(down_frame,text="DELETE",font=("arial",12,"bold"),width=12,bg="red",fg="white",pady=4)
        btnDeletemed.grid(row=2,column=0)

        btnClearmed=Button(down_frame,text="CLEAR",font=("arial",12,"bold"),width=12,bg="orange",fg="white",pady=4)
        btnClearmed.grid(row=3,column=0)

        #########################FRAME DETAILS##################################

        Framedetails=Frame(self.root,bd=15,relief=RIDGE)
        Framedetails.place(x=0,y=580,width=1530,height=210)

        #################### MAIN TABLE AND SCROLLBAR##########################

        Table_frame=Frame(Framedetails,bd=15,relief=RIDGE,padx=20)
        Table_frame.place(x=0,y=1,width=1500,height=180)

        scroll_x=ttk.Scrollbar(Table_frame,orient=HORIZONTAL)
        scroll_x.pack(side=BOTTOM,fill=X)

        scroll_y=ttk.Scrollbar(Table_frame,orient=VERTICAL)
        scroll_y.pack(side=RIGHT,fill=Y)

        self.pharmacy_table=ttk.Treeview(Table_frame,column=("reg","companyname","type","tabletname","lotno","issuedate",
                                                             "expdate","uses","sideeffect","warning","dosage","price","productqt")
                                                             ,xscrollcommand=scroll_x.set,yscrollcommand=scroll_y.set)

        scroll_x.pack(side=BOTTOM,fill=X)
        scroll_y.pack(side=RIGHT,fill=Y)

        scroll_x.config(command=self.pharmacy_table.xview)
        scroll_y.config(command=self.pharmacy_table.yview)

        self.pharmacy_table["show"]="headings"

        self.pharmacy_table.heading("reg",text="Reference No")
        self.pharmacy_table.heading("companyname",text="Company Name")
        self.pharmacy_table.heading("type",text="Types of Medicine")
        self.pharmacy_table.heading("tabletname",text="Tablet Name")
        self.pharmacy_table.heading("lotno",text="Lot No")
        self.pharmacy_table.heading("issuedate",text="Issue Date")
        self.pharmacy_table.heading("expdate",text="Exp Date")
        self.pharmacy_table.heading("uses",text="Uses")
        self.pharmacy_table.heading("sideeffect",text="Side Effects")
        self.pharmacy_table.heading("warning",text="Prec&Warning")
        self.pharmacy_table.heading("dosage",text="Dosage")
        self.pharmacy_table.heading("price",text="Price")
        self.pharmacy_table.heading("productqt",text="Product QTs")
        self.pharmacy_table.pack(fill=BOTH,expand=1)

        self.pharmacy_table.column("reg",width=100)
        self.pharmacy_table.column("companyname",width=100)
        self.pharmacy_table.column("type",width=100)
        self.pharmacy_table.column("tabletname",width=100)
        self.pharmacy_table.column("lotno",width=100)
        self.pharmacy_table.column("issuedate",width=100)
        self.pharmacy_table.column("expdate",width=100)
        self.pharmacy_table.column("uses",width=100)
        self.pharmacy_table.column("sideeffect",width=100)
        self.pharmacy_table.column("warning",width=100)
        self.pharmacy_table.column("dosage",width=100)
        self.pharmacy_table.column("price",width=100)
        self.pharmacy_table.column("productqt",width=100)

        ########################ADD MEDICINE FUNCTIONALITY####################

    def AddMed(self):
            conn=mysql.connector.connect(host="localhost",username="root",password="aditya21",database="mydata")
            my_cursor=conn.cursor()
            my_cursor.execute("INSERT INTO pharma(Ref,MedName) VALUES(%s,%s)",(
                                    self.refMed_var.get(),
                                    
            ))
            conn.commit()
            conn.close()
            messagebox.showinfo("Success","Medicine Added")

#def fetch_dataMed(self):
            




        












        



        




if __name__=="__main__":
    root=Tk()