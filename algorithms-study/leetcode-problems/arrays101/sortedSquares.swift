import UIKit

func sortedSquares(_ nums: [Int]) -> [Int] {
    
    var numsAux: [Int] = []
    
    for i in 0..<nums.count {
        numsAux.append(nums[i]*nums[i])
    }
    
    return numsAux.sorted(by: { $1 > $0 })
    
}

var nums = [-7,-3,2,3,11]

print(sortedSquares(nums))