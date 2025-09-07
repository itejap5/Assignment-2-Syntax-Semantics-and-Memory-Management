fn main() {
    let mut v = Vec::new();
    v.push(10);
    v.push(20);

    let sum = sum_slice(&v);
    println!("sum = {}", sum);
    
    let b = Box::new(42);
    println!("box = {}", b);
}

fn sum_slice(slice: &[i32]) -> i32 {
    slice.iter().sum()
}