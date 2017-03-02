//
//  ViewController.swift
//  flames
//
//  Created by cse on 01/03/17.
//  Copyright © 2017 cse. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    
    @IBOutlet weak var name1: UITextField!
    @IBOutlet weak var name2: UITextField!
    
    @IBOutlet weak var outcome: UILabel!

    
    @IBAction func display(_ sender: Any) {
        
        var n1 = name1.text
        var n2 = name2.text
        n1 = n1!.uppercased()
        n2 = n2!.uppercased()
        
        let c1 = n1!.characters.count
        let c2 = n2!.characters.count
        
        var tot = c1 + c2
        
        for  i in n1!.characters {
            if i == " "
            {
                tot = tot-1
            }
            for  var j in n2!.characters {
                if i == j{
                    tot = tot-2
                    j = "*"
                    break
                }
            }
        }
        
        outcome.text = String(tot)
    }
   
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

