def merge_sort(arr)
    if arr.length <= 1
        arr
    else
        mid = (arr.length / 2).floor
        left = merge_sort(arr[0..mid - 1])
        right = merge_sort(arr[mid..arr.length])
        merge(left,right)
    end
end

def merge(left,right)
    if left.empty?
        right
    elsif right.empty?
        left
    elsif left.first < right.first
        [left.first] + merge(left[1..left.length], right)
    else 
        [right.first] + merge(left, right[1..right.length])
    end
end

arr = [ 3, 777, 30, 40, 1, 10, 467, 333, 111]
p merge_sort(arr)