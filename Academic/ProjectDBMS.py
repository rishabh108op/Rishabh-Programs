from tkinter import*
from PIL import Image,ImageTk
from tkinter import ttk
import mysql.connector
from tkinter import messagebox

class PharmacyManagementSystem:
    def __init__(self,root):
        self.root=root
        self.root.title("Pharmacy Management System")
        self.root.geometry("1000x800")
        
     #{{{{{{{{{{{{{{{{{{{{{{ADD MED VARIABLE}}}}}}}}}}}}}}}}}}}}}}
    
        self.addmed_var=StringVar()
        self.refMed_var=StringVar()
        
        #main table variable
        self.ref_var=StringVar()
        self.cmpName_var=StringVar()
        self.typemed_var=StringVar()
        self.medName_var=StringVar()
        self.lot_var=StringVar()
        self.issuedate_var=StringVar()
        self.expdate_var=StringVar()
        self.uses_var=StringVar()
        self.sideeffect_var=StringVar()
        self.warning_var=StringVar()
        self.dosage_var=StringVar()
        self.price_var=StringVar()
        self.product_var=StringVar()
        
        
    
    
        
        lbltitle=Label(self.root,text="PHARAMACY MANAGEMENT SYSTEM",bg='white',fg="blue",font=("times new roman",20,"bold"),padx=2,pady=4)
        lbltitle.pack(side=TOP)   #for the title fill to fill the gap
        
        img1=Image.open("D:\\New folder\\rishabh img\\20211028_193335.jpg")
        img1=img1.resize((30,30),Image.Resampling.LANCZOS)
        self.photoimg1=ImageTk.PhotoImage(img1)
        b1=Button(self.root,image=self.photoimg1,borderwidth=0)
        b1.place(x=70,y=4)
        
        #data frame
        DataFrame=Frame(self.root,bd=15,relief=RIDGE)
        DataFrame.place(x=0,y=40,width=1275,height=400)
        
        DataFrameLeft=LabelFrame(DataFrame,bd=10,relief=RIDGE,padx=20,text="Medicine Information",fg="darkgreen",font=("arial",10,"bold"))
        DataFrameLeft.place(x=0,y=5,width=800,height=360)
        
        
        #Button Frame
        ButtonFrame=Frame(self.root,bd=15,relief=RIDGE,padx=7)
        ButtonFrame.place(x=0,y=440,width=1275,height=50)
        
        btnAddData=Button(ButtonFrame,text="Medicine Add",font=("arial",8,"bold"),bg="darkgreen",fg="white",width=15,command=self.Add_data)
        btnAddData.grid(row=0,column=0)
        
        btnUpdateMed=Button(ButtonFrame,text="UPDATE",font=("arial",8,"bold"),bg="darkgreen",fg="white",width=15,command=self.Update)
        btnUpdateMed.grid(row=0,column=1)
        
        btnDeleteMed=Button(ButtonFrame,text="DELETE",font=("arial",8,"bold"),bg="red",fg="white",width=15,command=self.delete)
        btnDeleteMed.grid(row=0,column=2)
        
        btnRestMed=Button(ButtonFrame,text="RESET",font=("arial",8,"bold"),bg="darkgreen",fg="white",width=15,command=self.reset)
        btnRestMed.grid(row=0,column=3)
        
        btnExitMed=Button(ButtonFrame,text="EXIT",font=("arial",8,"bold"),bg="darkgreen",fg="white",width=15)
        btnExitMed.grid(row=0,column=4)
        
        #search
        
        lblSearch=Label(ButtonFrame,font=("arial",12,"bold"),width=15,text="Search By",padx=2,bg="red",fg="white")
        lblSearch.grid(row=0,column=5,sticky=W)
        
        
        self.search_var=StringVar()
        search_combo=ttk.Combobox(ButtonFrame,textvariable=self.search_var,width=12,font=("arial",12,"bold"),state="readonly")
        search_combo["values"]=("Ref","Medname","Lot")
        search_combo.grid(row=0,column=6)
        search_combo.current(0)
        
        self.searchTxt_var=StringVar()
        
        txtSearch=Entry(ButtonFrame,textvariable=self.searchTxt_var,bd=3,relief=RIDGE,width=15,font=("arial",12,"bold"))
        txtSearch.grid(row=0,column=7)
        
        searchbtn=Button(ButtonFrame,text="SEARCH",font=("arial",8,"bold"),bg="darkgreen",fg="white",width=15)
        searchbtn.grid(row=0,column=8)
        
        showAll=Button(ButtonFrame,text="SHOW ALL",font=("arial",8,"bold"),bg="darkgreen",fg="white",width=15)
        showAll.grid(row=0,column=9)
        
        #Labels Entry
        
        lblrefno=Label(DataFrameLeft,font=("arial",12,"bold"),width=10,text="Refrence No",fg="black")
        lblrefno.grid(row=0,column=0,sticky=W)
        
        conn=mysql.connector.connect(host="localhost",username="root",password="Prishabh@7044",database="mydata")
        my_cursor=conn.cursor()
        my_cursor.execute("select Ref from pharma")
        row=my_cursor.fetchall()
        ref_combo=ttk.Combobox(DataFrameLeft,textvariable=self.ref_var,width=22,font=("arial",12,"bold"),state="readonly")
        ref_combo["values"]=row
        ref_combo.grid(row=0,column=1)
        ref_combo.current(0)
        
        
        lblcmpName=Label(DataFrameLeft,font=("arial",12,"bold"),text="Company Name:",padx=2,pady=6)
        lblcmpName.grid(row=1,column=0,sticky=W)
        txtcmpname=Entry(DataFrameLeft,textvariable=self.cmpName_var,font=("arial",13,"bold"),bg="white",bd=2,relief=RIDGE,width=24)
        txtcmpname.grid(row=1,column=1)
        
        lblTypeofMedicine=Label(DataFrameLeft,font=("arial",12,"bold"),text="Type Of Medicine",padx=2,pady=6)
        lblTypeofMedicine.grid(row=2,column=0,sticky=W)
        
        comTypeofMedicine=ttk.Combobox(DataFrameLeft,textvariable=self.typemed_var,state="readonly",font=("arial",12,"bold"),width=22)
        comTypeofMedicine["values"]=("Tablet","Liquid","Capsules","Topical Medicines","Drops","Inhales","Injection")
        comTypeofMedicine.current(0)
        comTypeofMedicine.grid(row=2,column=1)
        
        #Add Medicine
        lblMedicineName=Label(DataFrameLeft,font=("arial",12,"bold"),text="Medicine Name",padx=2,pady=6)
        lblMedicineName.grid(row=3,column=0,sticky=W)

        comMedicineName=ttk.Combobox(DataFrameLeft,textvariable=self.medName_var,state="readonly",font=("arial",12,"bold"),width=22)
        conn=mysql.connector.connect(host="localhost",username="root",password="Prishabh@7044",database="mydata")
        my_cursor=conn.cursor()
        my_cursor.execute("select MedName from pharma")
        med=my_cursor.fetchall()
        comMedicineName["values"]=med
        comMedicineName.current(ref_combo.current())
        comMedicineName.grid(row=3,column=1)
        
        lblLotNo=Label(DataFrameLeft,font=("arial",12,"bold"),text="Lot No:",padx=2,pady=6)
        lblLotNo.grid(row=4,column=0,sticky=W)
        txtLotno=Entry(DataFrameLeft,textvariable=self.lot_var,font=("arial",13,"bold"),bg="white",bd=2,relief=RIDGE,width=24)
        txtLotno.grid(row=4,column=1)
        
        lblIssueDate=Label(DataFrameLeft,font=("arial",12,"bold"),text="Issue Date:",padx=2,pady=6)
        lblIssueDate.grid(row=5,column=0,sticky=W)
        txtIssueDate=Entry(DataFrameLeft,textvariable=self.issuedate_var,font=("arial",13,"bold"),bg="white",bd=2,relief=RIDGE,width=24)
        txtIssueDate.grid(row=5,column=1)
        
        lblExDate=Label(DataFrameLeft,font=("arial",12,"bold"),text="Exp Date:",padx=2,pady=6)
        lblExDate.grid(row=6,column=0,sticky=W)
        txtExDate=Entry(DataFrameLeft,textvariable=self.expdate_var,font=("arial",13,"bold"),bg="white",bd=2,relief=RIDGE,width=24)
        txtExDate.grid(row=6,column=1)
        
        lblUses=Label(DataFrameLeft,font=("arial",12,"bold"),text="Uses:",padx=2,pady=6)
        lblUses.grid(row=7,column=0,sticky=W)
        txtUses=Entry(DataFrameLeft,textvariable=self.uses_var,font=("arial",13,"bold"),bg="white",bd=2,relief=RIDGE,width=24)
        txtUses.grid(row=7,column=1)
        
        lblSideEffects=Label(DataFrameLeft,font=("arial",12,"bold"),text="Side Effect:",padx=2,pady=6)
        lblSideEffects.grid(row=8,column=0,sticky=W)
        txtSideEffects=Entry(DataFrameLeft,textvariable=self.sideeffect_var,font=("arial",13,"bold"),bg="white",bd=2,relief=RIDGE,width=24)
        txtSideEffects.grid(row=8,column=1)
        
        lblPrecWarning=Label(DataFrameLeft,font=("arial",12,"bold"),text="Prec&Warning:",padx=15,pady=6)
        lblPrecWarning.grid(row=0,column=2,sticky=W)
        txtPrecWarning=Entry(DataFrameLeft,textvariable=self.warning_var,font=("arial",13,"bold"),bg="white",bd=2,relief=RIDGE,width=24)
        txtPrecWarning.grid(row=0,column=3)
        
        lblDosage=Label(DataFrameLeft,font=("arial",12,"bold"),text="Dosage:",padx=15,pady=6)
        lblDosage.grid(row=1,column=2,sticky=W)
        txtDosage=Entry(DataFrameLeft,textvariable=self.dosage_var,font=("arial",13,"bold"),bg="white",bd=2,relief=RIDGE,width=24)
        txtDosage.grid(row=1,column=3)
        
        lblPrice=Label(DataFrameLeft,font=("arial",12,"bold"),text="Tablets Price:",padx=15,pady=6)
        lblPrice.grid(row=2,column=2,sticky=W)
        txtPrice=Entry(DataFrameLeft,textvariable=self.price_var,font=("arial",13,"bold"),bg="white",bd=2,relief=RIDGE,width=24)
        txtPrice.grid(row=2,column=3)
        
        lblProductQt=Label(DataFrameLeft,font=("arial",12,"bold"),text="Product QT:",padx=15,pady=6)
        lblProductQt.grid(row=3,column=2,sticky=W)
        txtProductQt=Entry(DataFrameLeft,textvariable=self.product_var,font=("arial",13,"bold"),bg="white",bd=2,relief=RIDGE,width=24)
        txtProductQt.grid(row=3,column=3)
        
        #image Left dataframe
        lblhome=Label(DataFrameLeft,font=("arial",12,"bold"),text="Stay home Stay safe",padx=15,pady=6,bg="white",fg="red",width=30)
        lblhome.place(x=400,y=150)
        
        img2=Image.open("D:\\New folder\\rishabh img\\1CR21CS146.jpg")
        img2=img2.resize((100,130),Image.ADAPTIVE)
        self.photoimg2=ImageTk.PhotoImage(img2)
        b2=Button(self.root,image=self.photoimg2,borderwidth=0)
        b2.place(x=500,y=270)
        
        
        
        
        
        
        
        
        
        
        
        
        
        #DataFrame Right
        
        DataFrameRight=LabelFrame(DataFrame,bd=10,relief=RIDGE,padx=20,text="Medicine Add Department",fg="darkgreen",font=("arial",10,"bold"))
        DataFrameRight.place(x=810,y=5,width=435,height=360)
        
        img3=Image.open("D:\\New folder\\rishabh img\\1CR21CS146.jpg")
        img3=img3.resize((100,80),Image.ADAPTIVE)
        self.photoimg3=ImageTk.PhotoImage(img3)
        b3=Button(self.root,image=self.photoimg3,borderwidth=0)
        b3.place(x=850,y=85)
        
        img4=Image.open("D:\\New folder\\rishabh img\\1CR21CS146.jpg")
        img4=img4.resize((100,80),Image.ADAPTIVE)
        self.photoimg4=ImageTk.PhotoImage(img4)
        b4=Button(self.root,image=self.photoimg4,borderwidth=0)
        b4.place(x=950,y=85)

        img5=Image.open("D:\\New folder\\rishabh img\\1CR21CS146.jpg")
        img5=img5.resize((100,80),Image.ADAPTIVE)
        self.photoimg5=ImageTk.PhotoImage(img5)
        b5=Button(self.root,image=self.photoimg5,borderwidth=0)
        b5.place(x=1050,y=85)
        
        lblrefno=Label(DataFrameRight,font=("arial",12,"bold"),text="Reference No:",padx=15,pady=6)
        lblrefno.place(x=0,y=110)
        txtrefno=Entry(DataFrameRight,textvariable=self.refMed_var,font=("arial",13,"bold"),bg="white",bd=2,relief=RIDGE,width=24)
        txtrefno.place(x=135,y=110)
        
        lblmedname=Label(DataFrameRight,font=("arial",12,"bold"),text="Medicine Name:",padx=15,pady=6)
        lblmedname.place(x=0,y=140)
        txtmedname=Entry(DataFrameRight,textvariable=self.addmed_var,font=("arial",13,"bold"),bg="white",bd=2,relief=RIDGE,width=24)
        txtmedname.place(x=135,y=140)
        
        #=============================================side frame
        
        
        side_frame=Frame(DataFrameRight,bd=4,relief=RIDGE,bg="white")
        side_frame.place(x=0,y=170,width=290,height=160)
        
        sc_x=ttk.Scrollbar(side_frame,orient=HORIZONTAL)
        sc_x.pack(side=BOTTOM,fill=X)
        sc_y=ttk.Scrollbar(side_frame,orient=VERTICAL)
        sc_y.pack(side=RIGHT,fill=Y)
        
        self.medicine_table=ttk.Treeview(side_frame,columns=("ref","medname"),xscrollcommand=sc_x.set,yscrollcommand=sc_y.set)
        
        sc_x.config(command=self.medicine_table.xview)
        sc_y.config(command=self.medicine_table.yview)
        
        self.medicine_table.heading("ref",text="Ref")
        self.medicine_table.heading("medname",text="Medicine Name")
        
        self.medicine_table["show"]="headings"
        self.medicine_table.pack(fill=BOTH,expand=1)
        
        self.medicine_table.column("ref",width=100)
        self.medicine_table.column("medname",width=100)
        
        self.medicine_table.bind("<ButtonRelease-1>",self.Medget_cursor)
        
        
        #+++++++++++++++++++++++++++++++++++++++++Med Add buttons
        
        down_frame=Frame(DataFrameRight,border=4,relief=RIDGE,bg="darkgreen")
        down_frame.place(x=300,y=170,width=80,height=160)
        
        btnAddmed=Button(down_frame,text="ADD",font=("arial",8,"bold"),bg="lime",pady=2,fg="white",width=9,command=self.AddMed)
        btnAddmed.grid(row=0,column=0)
        
        btnAddmed=Button(down_frame,text="UPDATE",font=("arial",8,"bold"),bg="purple",pady=2,fg="white",width=9,command=self.UpdateMed)
        btnAddmed.grid(row=1,column=0)
        
        btnAddmed=Button(down_frame,text="DELETE",font=("arial",8,"bold"),bg="red",pady=2,fg="white",width=9,command=self.DeleteMed)
        btnAddmed.grid(row=2,column=0)
        
        btnAddmed=Button(down_frame,text="CLEAR",font=("arial",8,"bold"),bg="orange",pady=2,fg="white",width=9,command=self.clearmed)
        btnAddmed.grid(row=3,column=0)
        
        #Frame details++++++++++++++++++++++++
        
        Framedetails=Frame(self.root,bd=15,relief=RIDGE)
        Framedetails.place(x=0,y=500,width=1270,height=150)
        
        
        #Main table Scrool+++++++++++++++
        
        Table_frame=Frame(Framedetails,bd=4,relief=RIDGE,padx=20)
        Table_frame.place(x=0,y=1,width=1255,height=130)
        
        
        scroll_x=ttk.Scrollbar(Table_frame,orient=HORIZONTAL)
        scroll_x.pack(side=BOTTOM,fill=X)
        scroll_y=ttk.Scrollbar(Table_frame,orient=VERTICAL)
        scroll_y.pack(side=RIGHT,fill=Y)
        
        self.pharmacy_table=ttk.Treeview(Table_frame,columns=("reg","companyname","type","tabletname","lotno","issuedate","expdate","uses",
                                                              "sideeffect","warning","dosage","price","productqt"),xscrollcommand=scroll_x.set,yscrollcommand=scroll_y.set)
        scroll_x.pack(side=BOTTOM,fill=X)
        scroll_y.pack(side=RIGHT,fill=Y)
        
        scroll_x.config(command=self.pharmacy_table.xview)
        scroll_y.config(command=self.pharmacy_table.yview)
        
        self.pharmacy_table["show"]="headings"
        
        self.pharmacy_table.heading("reg",text="Reference No")
        self.pharmacy_table.heading("companyname",text="Company Name")
        self.pharmacy_table.heading("type",text="Type of Medicine")
        self.pharmacy_table.heading("tabletname",text="Tablet Name")
        self.pharmacy_table.heading("lotno",text="Lot No")
        self.pharmacy_table.heading("issuedate",text="Issue Date")
        self.pharmacy_table.heading("expdate",text="Exp Date")
        self.pharmacy_table.heading("uses",text="Uses")
        self.pharmacy_table.heading("sideeffect",text="Side Effect")
        self.pharmacy_table.heading("warning",text="Prec&Warning")
        self.pharmacy_table.heading("dosage",text="Dosage")
        self.pharmacy_table.heading("price",text="Price")
        self.pharmacy_table.heading("productqt",text="Product Qts")
        self.pharmacy_table.pack(fill=BOTH,expand=1)
        
        
        self.pharmacy_table.column("reg",width=90)
        self.pharmacy_table.column("companyname",width=100)
        self.pharmacy_table.column("type",width=100)
        self.pharmacy_table.column("tabletname",width=90)
        self.pharmacy_table.column("lotno",width=90)
        self.pharmacy_table.column("issuedate",width=90)
        self.pharmacy_table.column("expdate",width=90)
        self.pharmacy_table.column("uses",width=90)
        self.pharmacy_table.column("sideeffect",width=90)
        self.pharmacy_table.column("warning",width=90)
        self.pharmacy_table.column("dosage",widt=90)
        self.pharmacy_table.column("price",widt=80)
        self.pharmacy_table.column("productqt",widt=100)
        self.fetch_dataMed()
        self.fetch_data()
        self.pharmacy_table.bind("<ButtonRelease-1>",self.get_cursor)
        
        
        
        #SQL BACKENd
        #Add Medicine Functionalityvdecleration
        
    def AddMed(self):
        conn=mysql.connector.connect(host="localhost",username="root",password="Prishabh@7044",database="mydata")
        my_cursor=conn.cursor()
        my_cursor.execute("insert into pharma(Ref,MedName) values(%s,%s)",(
                                                                     self.refMed_var.get(),
                                                                     self.addmed_var.get(),
                                                                    
                                                                     ))
        conn.commit()
        self.fetch_dataMed()
        self.Medget_cursor()
        conn.close()
        messagebox.showinfo("Success","Medicine Added")
        
    
    def fetch_dataMed(self):
        conn=mysql.connector.connect(host="localhost",username="root",password="Prishabh@7044",database="mydata")
        my_cursor=conn.cursor()
        my_cursor.execute("select * from pharma")
        rows=my_cursor.fetchall()
        if len(rows)!=0:
            self.medicine_table.delete(*self.medicine_table.get_children())
            for i in rows:
                self.medicine_table.insert("",END,values=i)
            conn.commit()
        conn.close()
        
        #+++++++++++++++++++++++++++++Med get cursor
        
    def Medget_cursor(self,event=""):
        cursor_row=self.medicine_table.focus()
        content=self.medicine_table.item(cursor_row)
        row=content["values"]
        self.refMed_var.set(row[0])
        self.addmed_var.set(row[1])
        
        
    def UpdateMed(self):
        if self.refMed_var.get()=="" or self.addmed_var.get()=="":
            messagebox.showerror("Error","All fields are Required!")
        else:
            conn=mysql.connector.connect(host="localhost",username="root",password="Prishabh@7044",database="mydata")
            my_cursor=conn.cursor()
            my_cursor.execute("update pharma set MedName=%s where Ref=%s",(
                                                                        self.addmed_var.get(),
                                                                        self.refMed_var.get(),
                                                                        ))
            conn.commit()
            self.fetch_dataMed()
            conn.close()
            messagebox.showinfo("Success","Medicine has been updated")
        
        
    def DeleteMed(self):
        conn=mysql.connector.connect(host="localhost",username="root",password="Prishabh@7044",database="mydata")
        my_cursor=conn.cursor()
        sql="delete from pharma where Ref=%s"
        val=(self.refMed_var.get(),)
        my_cursor.execute(sql,val)
        conn.commit()
        self.fetch_dataMed()
        conn.close()
        
    def clearmed(self):
        self.refMed_var.set("")
        self.addmed_var.set("")
        
    #{{{{{{{{{{{{{{{{{{{{{{{{Main table}}}}}}}}}}}}}}}}}}}}}}}}
        
    def Add_data(self):
        if self.ref_var.get()=="" or self.lot_var.get()=="":
            messagebox.showerror("Error","All Fields Required")
        else:
            conn=mysql.connector.connect(host="localhost",username="root",password="Prishabh@7044",database="mydata")
            my_cursor=conn.cursor()
            my_cursor.execute("insert into pharmacy values(%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s)",(
                                                                                self.ref_var.get(),
                                                                                self.cmpName_var.get(),
                                                                                self.typemed_var.get(),
                                                                                self.medName_var.get(),
                                                                                self.lot_var.get(),
                                                                                self.issuedate_var.get(),
                                                                                self.expdate_var.get(),
                                                                                self.uses_var.get(),
                                                                                self.sideeffect_var.get(),
                                                                                self.warning_var.get(),
                                                                                self.dosage_var.get(),
                                                                                self.price_var.get(),
                                                                                self.product_var.get()
                                                                        
                                                                        ))
            conn.commit()
            self.fetch_data()
            conn.close()
            messagebox.showinfo("Success","Data has been Inserted")
   
    def fetch_data(self):
        conn=mysql.connector.connect(host="localhost",username="root",password="Prishabh@7044",database="mydata")
        my_cursor=conn.cursor()
        my_cursor.execute("select * from pharmacy")
        row=my_cursor.fetchall()
        if len(row)!=0:
            self.pharmacy_table.delete(*self.pharmacy_table.get_children())
            for i in row:
                self.pharmacy_table.insert("",END,values=i)
            conn.commit()
        conn.close()
            
    def get_cursor(self,ev=""):
        cursor_row=self.pharmacy_table.focus()
        content=self.pharmacy_table.item(cursor_row)
        row=content["values"]
        
        self.ref_var.set(row[0]),
        self.cmpName_var.set(row[1]),
        self.typemed_var.set(row[2]),
        self.medName_var.set(row[3]),
        self.lot_var.set(row[4]),
        self.issuedate_var.set(row[5]),
        self.expdate_var.set(row[6]),
        self.uses_var.set(row[7]),
        self.sideeffect_var.set(row[8]),
        self.warning_var.set(row[9]),
        self.dosage_var.set(row[10]),
        self.price_var.set(row[11]),
        self.product_var.set(row[12])
            
    def Update(self):
        if self.ref_var.get()=="" or self.lot_var.get()=="":
            messagebox.showerror("Error","All fields are Required!")
        else:
            conn=mysql.connector.connect(host="localhost",username="root",password="Prishabh@7044",database="mydata")
            my_cursor=conn.cursor()
            my_cursor.execute("update pharmacy set CmpName=%s,TypeMed=%s,medname=%s,LotNo=%s,Issuedate=%s,Expdate=%s,uses=%s,Sideeffect=%s,warning=%s,dosage=%s,Price=%s,product=%s where Ref_no=%s",(
                                                                        self.cmpName_var.get(),
                                                                        self.typemed_var.get(),
                                                                        self.medName_var.get(),
                                                                        self.lot_var.get(),
                                                                        self.issuedate_var.get(),
                                                                        self.expdate_var.get(),
                                                                        self.uses_var.get(),
                                                                        self.sideeffect_var.get(),
                                                                        self.warning_var.get(),
                                                                        self.dosage_var.get(),
                                                                        self.price_var.get(),
                                                                        self.product_var.get(),
                                                                        self.ref_var.get()
                                                                        ))
            conn.commit()
            self.fetch_data()
            conn.close()
            messagebox.showinfo("Success","Record has been updated Successfully") 
            
    
    
    def delete(self):
        conn=mysql.connector.connect(host="localhost",username="root",password="Prishabh@7044",database="mydata")
        my_cursor=conn.cursor()
        sql="delete from pharmacy where Ref_no=%s"
        val=(self.ref_var.get(),)
        my_cursor.execute(sql,val)
        conn.commit()
        self.fetch_data()
        conn.close()
        messagebox.showinfo("DELETED","Info Deleted Successfully")
        
        
    def reset(self):
        #self.ref_var.set(""),
        self.cmpName_var.set(""),
        #self.typemed_var.set(""),
        #self.medName_var.set(""),
        self.lot_var.set(""),
        self.issuedate_var.set(""),
        self.expdate_var.set(""),
        self.uses_var.set(""),
        self.sideeffect_var.set(""),
        self.warning_var.set(""),
        self.dosage_var.set(""),
        self.price_var.set(""),
        self.product_var.set("")
        
    def search_data(self):
        conn=mysql.connector.connect(host="localhost",username="root",password="Prishabh@7044",database="mydata")
        my_cursor=conn.cursor()
        my_cursor.execute("select * from pharmacy where "+str(self.search_var.get())+"LIKE"+str(self.searchTxt_var.get())+"%")
        
        roww=my_cursor.fetchall()
        if len(roww)!=0:
            self.pharmacy_table.delete(*self.pharmacy_table.get_children())
            for i in roww:
                self.pharmacy_table.insert("",END,values=i)
                conn.commit()
            conn.close
        
        
        
        
        
        
        
        
        
        
        
        
        
        
if __name__ == "__main__":
    root=Tk()
    obj=PharmacyManagementSystem(root)
    root.mainloop()