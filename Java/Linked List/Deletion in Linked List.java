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

    public void deleteFromStart(){
        head = head.next;
    }

    public void deleteFromEnd(){
        Node temp = head;
        while(temp.next.next != null){
            temp = temp.next;
        }
        temp.next = null;
    }

    public void deleteAGivenNode(int val){
        if(head.data == val){
            head = head.next;
            return;
        }
        Node temp = head, prev = null;
        while(temp.data != val){
            prev = temp;
            temp = temp.next;
        }
        prev.next = temp.next;
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
		llist.deleteFromStart();
        llist.deleteAGivenNode(20);
        llist.deleteFromEnd();
		llist.printList();
	}
}
