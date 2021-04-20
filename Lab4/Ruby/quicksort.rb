class Array
    def quicksort
      return [] if empty?
  
      pivot = delete_at(rand(size))
      left, right = partition(&pivot.method(:>))
  
      return *left.quicksort, pivot, *right.quicksort
    end
end

arr = [ 3, 777, 30, 40, 1, 10, 467, 333, 111]
p arr.quicksort

