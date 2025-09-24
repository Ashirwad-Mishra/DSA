import java.io.File;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;
public class xml 
{
    public static void main(String[] args) 
    {
        try
        {
            DocumentBuilderFactory factory = DocumentBuilderFactory.newInstance();
            DocumentBuilder builder = factory.newDocumentBuilder();

            Document doc = builder.newDocument();

            Element rootElement = doc.createElement("School");
            doc.appendChild(rootElement);

            // Define school elements
            Element student = doc.createElement("Student");
            rootElement.appendChild(student);

            Attr attribute = doc.createAttribute("id");
            attribute.setValue("1");
            student.setAttributeNode(attribute);

            Element firstName = doc.createElement("firstName");
            firstName.appendChild(doc.createTextNode("Coala ka baby Goala"));
            student.appendChild(firstName);

            Element lastName = doc.createElement("lastName");
            lastName.appendChild(doc.createTextNode("Aditya"));
            student.appendChild(lastName);

            Element email = doc.createElement("email");
            email.appendChild(doc.createTextNode("aditya.coala.goala@gmail.com"));
            student.appendChild(email);

            Element phone = doc.createElement("phone");
            phone.appendChild(doc.createTextNode("7876278627"));
            student.appendChild(phone);

            // Write the content into an XML file
            TransformerFactory transformerFactory = TransformerFactory.newInstance();
            Transformer transformer = transformerFactory.newTransformer();

            DOMSource domSource = new DOMSource(doc);
            StreamResult streamResult = new StreamResult(new File("school.xml"));
            transformer.setOutputProperty(OutputKeys.INDENT, "yes");
            transformer.transform(domSource, streamResult);

            System.out.println("XML file saved to specified path.");
        } 
        catch (Exception e) 
        {
            e.printStackTrace();
        }
    }
}