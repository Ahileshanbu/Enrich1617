
import UIKit

class TableViewController: UITableViewController {

    let fruits = ["apples🍎","orranges","grapes","pineapples"]
    let fruname = ["ap.png","ora.png","gra.png","pin.png"]
    let veg = ["potato","tomato"]
    let vegname = ["pot.png","tom.png"]
    override func viewDidLoad() {
        super.viewDidLoad()

        // Uncomment the following line to preserve selection between presentations
        // self.clearsSelectionOnViewWillAppear = false

        // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
        // self.navigationItem.rightBarButtonItem = self.editButtonItem()
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    // MARK: - Table view data source

    override func numberOfSections(in tableView: UITableView) -> Int {
        // #warning Incomplete implementation, return the number of sections
        return 2
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        // #warning Incomplete implementation, return the number of rows
        if section == 0 {
        return fruits.count
        }
        else{
            return veg.count
        }
    }

    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "cell", for: indexPath)

        // Configure the cell...
        if indexPath.section == 0{
        cell.textLabel?.text = fruits[indexPath.row]
            cell.detailTextLabel?.text = fruits[indexPath.row]
            cell.imageView?.image = UIImage.init(named: fruname[indexPath.row])
        }
        else{
             cell.textLabel?.text = veg[indexPath.row]
            
        }
        return cell
    }
    
