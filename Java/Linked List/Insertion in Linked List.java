
class LinkedList
{
	Node head;
	class Node
	{
		int data;
		Node next;
		Node(int d) {
            data = d;
            next = null;
        }
	}


	public void insertAtStart(){
        Node new_node = new Node(50);
        new_node.next = head;
        head = new_node;
    }

    public void insertAfterNode(int val){
        Node new_node = new Node(50);
        Node temp = head;
        while(temp.data != val){
            temp = temp.next;
        }
        new_node.next = temp.next;
        temp.next = new_node;
    }

    public void insertAtEnd(){
        Node new_node = new Node(50);
        Node temp = head;
        while(temp.next != null){
            temp = temp.next;
        }

        temp->next = new_node;
    }

	public void printList()
	{
		Node temp = head;
		while (temp != null)
		{
			System.out.print(temp.data+" ");
			temp = temp.next;
		}
	}

	public static void main(String[] args)
	{
		LinkedList llist = new LinkedList();
        
        
      llist.head =  new Node(10);
      llist.insertAfterNode(10);
		  llist.insertAtStart();
		  llist.printList();
	}
}
