class tnode{
    int data;
    tnode left,right;
    public tnode(int key){
        data=key;
        left=right=null;
    }
}
class binarrytree{
    tnode root;
    binarrytree(){
        root=null;
    }
    void travel(tnode root){
        if(root==null) return;
        System.out.println("data:"+root.data);

    }
    void travel(){travel(root);}
    public static void main(String[] args){
        binarrytree tree=new binarrytree();
        tree.root=new tnode(10);
        tree.root.right=new tnode(20);
        tree.root.left=new tnode(30);
        tree.travel(tree.root);
    }
}

