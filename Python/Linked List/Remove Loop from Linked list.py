def removeLoop(self, head):  
      if self.head is None:
          return
      if self.head.next is None:
          return
      slow_p = self.head
      fast_p = self.head
           
      while(slow_p and fast_p and fast_p.next):
          slow_p = slow_p.next
          fast_p = fast_p.next.next
  
          # If slow_p and fast_p meet at some point then
          # there is a loop
          if slow_p == fast_p:
            slow_p = self.head
              # Finding the begining of the loop
            while (slow_p.next != fast_p.next):
              slow_p = slow_p.next
              fast_p = fast_p.next
  
                # Sinc fast.next is the looping point
            fast_p.next = None  # Remove loop
  
