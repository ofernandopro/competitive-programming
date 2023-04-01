import Foundation

func findMaxConsecutiveOnes(_ nums: [Int]) -> Int {
    var max = 0
    var cont1 = 0

    for i in 0..<nums.count {
        if nums[i] == 1 {
            cont1 += 1
        } else {
            if (cont1 > max) {
                max = cont1
            }   
            cont1 = 0
        }

        if i == (nums.count - 1) {
            if (cont1 > max) {
                max = cont1
            }
        }
    }

    return max

}

let v1: [Int] = [1, 1, 0, 1, 1, 1]

print(findMaxConsecutiveOnes(v1))