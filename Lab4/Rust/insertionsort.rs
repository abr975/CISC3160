fn main() {
    let mut v = vec![1, 3 , 7 , 40, 120, 64, 5];
    insertion_sort(&mut v);
    println!("Final sorted list: {:?}", v);
}

fn insertion_sort(arr: &mut Vec<isize>){
    for i in 1..arr.len(){
        let mut j = i;
        while j > 0 && arr[j] < arr[j-1]{
            arr.swap(j,j-1);
            j=j-1;
        }
    }
}
