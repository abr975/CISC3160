pub fn main () {
    let mut v = vec![1, 3 , 7 , 40, 120, 64, 5];
    quicksort(&mut v);
}

pub fn quicksort(v: &mut [usize] ){

    let mid = partition(v); // mid point of partition
    
    
    if v[..mid].len() > 1 {
        quicksort(&mut v[..mid]);
    }
    
    if v[mid+1..].len() > 1 {
        quicksort(&mut v [mid+1..]);
    }
    
    println!("Final sorted list: {:?}", v);
}


pub fn partition(v: &mut [usize])->usize{
    let p = v[0]; // pivot point
    let mut i = 1; // i is iterator from left to right 
    // look for elem bigger than pivot
    let mut j = v.len() - 1;
    while(true){

        while i < v.len() && v[i] <= p {
            i = i + 1;
        }
        while j > 0 && v[j] >= p {
            j = j - 1;
        }
        if i >= j {
            break;
        }
        swap(v,i,j);
    }
    swap(v, 0, j);
    j       // midpoint of partition
}

pub fn swap (v: &mut [usize], i:usize, j:usize){
    let t;
    t = v[i];
    v[i] = v[j];
    v[j] = t;
}