
de* sort(Node *head) {
    if(head == NULL)
            return ;
	        Node *i = head,*j = head->link, *pvt = head, *store,*ptr; int temp;
		   
		       
		          while(j!=NULL){
			          if(j->data < pvt ->data){
				              store = i; ptr = i->link;  //so that it passes the list before the sorted element
					                  
							              i = i->link;
								                  
										              temp = i ->data;
											                  i->data = j->data;
													              j->data = temp;
														              }
															              j = j->link;
																          }
																	      if(i != head){
																	              
																		              temp = i->data;
																			              i->data = pvt->data;
																				              pvt->data = temp;
																					              
																						              store->link = NULL; //send element before i
																							              sort(head);
																								              store->link = ptr; //regaining the link part
																									          } 
																										      sort(i->link);    
																										          return head;
																											  }
