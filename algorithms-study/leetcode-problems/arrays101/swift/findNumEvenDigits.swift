import Foundation

func findNumbers(_ nums: [Int]) -> Int {
  var qntNumbersWithEvenDigits = 0;

  for i in 0..<nums.count {
    let s = String(nums[i])
    if (s.count % 2 == 0) {
      qntNumbersWithEvenDigits += 1
    }
  }

  return qntNumbersWithEvenDigits
}

let v1: [Int] = [555,901,482,1771, 2333, 212]

print(findNumbers(v1))