
    class node{
        constructor node(val) {
            this.key=val;
            this.left=null;
            this.right=null;
        }
    }
    var root=null;
    function travel(root){
        if(root==null) return;
        travel(root.left);
        travel(root.right);
        document,write(node.key+" ");
    }
    root=new node(1);
    root.left=new node(2);
    root.right=new node(3);
    root.left.right=new node(4);
    travel(root);