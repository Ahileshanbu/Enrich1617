@IBAction func ipadpressed(_ sender: Any) {



        performSegue(withIdentifier: "product", sender: sender)



    }





    @IBAction func ipodpressed(_ sender: Any) {

         performSegue(withIdentifier: "product", sender: sender)    }





    @IBAction func ipodtouchpressed(_ sender: Any) {

         performSegue(withIdentifier: "product", sender: sender)    }







    @IBAction func iphonepressed(_ sender: Any) {

         performSegue(withIdentifier: "product", sender: sender)    }





    @IBAction func iwatchpressed(_ sender: Any) {

         performSegue(withIdentifier: "product", sender: sender)

    }





    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {



        let productViewController : ProductViewController =
segue.destination as! ProductViewController



        let button : UIButton = sender as! UIButton

        let tagvalue = button.tag



        productViewController.productchosen = tagvalue



    }












@IBOutlet weak var productlabel: UILabel!



    @IBOutlet weak var productimageview: UIImageView!



    var productchosen : Int = 0



    override func viewDidLoad() {

        super.viewDidLoad()



        switch productchosen{

        case 0:

            productlabel.text="ipad"

            productimageview.image = UIImage.init(named: "ipad.png")

        case 1:

            productlabel.text="ipod"

             productimageview.image = UIImage.init(named: "ipod.png")

        case 2:

            productlabel.text="ipod touch"

            productimageview.image = UIImage.init(named: "ipodt.png")

        case 3:

            productlabel.text="iphone"

            productimageview.image = UIImage.init(named: "iphone.png")

        case 4:

            productlabel.text="iwatch"

            productimageview.image = UIImage.init(named:"iwatch.png")

        default :

            productlabel.text="none"



        }


        // Do any additional setup after loading the view.

    }
