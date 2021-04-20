def insertion_sort(arr)
    for i in 1...(arr.length)
        j = i
        while j > 0
            if arr[j-1] > arr[j]
                temp = arr[j]
                arr[j] = arr[j-1]
                arr[j-1] = temp
            else
                break
            end
            j = j - 1
        end
    end
    return arr
end

arr = [ 3, 777, 30, 40, 1, 10, 467, 333, 111]
p insertion_sort(arr)