const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

function main() {
  let Name;
  let Option;
  let headTime;
  let ailMent;
  let Ans;

  console.log("Hi, my name is chat doctor! I am built to help you with every issue concerning your health as well as help you connect to a medical service personnel if your situation requires one.");

  rl.question("Enter your name: ", (name) => {
    Name = name;
    console.log(`Alright then! Welcome ${Name}, thank you for reaching out! Hope your concern is addressed to your maximum satisfaction.`);
    console.log("This is a list of my capabilities:");
    console.log("1. Basic service (First aid)");
    console.log("2. Health Consultancy");
    console.log("3. Sexual and Reproductive health");
    console.log("4. Mental health");
    console.log("5. Speak to a physician online");

    rl.question("Choose an option out of my capabilities: ", (option) => {
      Option = option;

      if (Option === '1') {
        console.log("1. Headache");
        console.log("2. Stomach Ache");
        console.log("3. Nausea");
        console.log("4. BodyPains");

        rl.question("Enter your Ailment: ", (ailment) => {
          ailMent = ailment;

          if (ailMent === "1") {
            rl.question("How long have you been experiencing these headaches? (Less than a week/more than a week): ", (time) => {
              headTime = time;

              if (headTime.toLowerCase() === "less than a week") {
                rl.question("Are you experiencing nausea, vomiting, or sensitivity to light or sound? Yes or No: ", (answer) => {
                  Ans = answer;

                  if (Ans.toLowerCase() === "yes") {
                    rl.question("Do you have any allergies or are you on any medications? Yes or No: ", (allergies) => {
                      if (allergies.toLowerCase() === "yes") {
                        rl.question("Are you under any significant stress (Have you had enough rest from the onset of the headache till now?) Yes or No: ", (stress) => {
                          if (stress.toLowerCase() === "yes") {
                            console.log("Take some painkillers (as seen on prescription box) and drink a glass of water or a sachet of water and take a nap. If pain persists, you can contact a physician.");
                          } else {
                            rl.question("Have you drunk enough water? Yes or No: ", (water) => {
                              if (water.toLowerCase() === "yes") {
                                rl.question("Do you take in alcohol or use any substance prior to the eve of the headache? Yes or No: ", (alcohol) => {
                                  if (alcohol.toLowerCase() === "yes") {
                                    console.log("Get yourself some coconut water or ginger tea, drink enough, and get some rest.");
                                  } else {
                                    console.log("Contact a physician now.");
                                  }
                                });
                              } else {
                                console.log("Drink enough water as the human body requires eight to ten glasses of water daily. The headache could be due to dehydration. If the problem persists after consuming enough water, it is advisable to speak to a trained physician.");
                              }
                            });
                          }
                        });
                      }
                    });
                  } else {
                    rl.question("Would you mind speaking to a physician? Yes or No: ", (phYLERgies) => {
                      if (phYLERgies.toLowerCase() === "yes") {
                        console.log("You can contact a Physician.");
                      }
                    });
                  }
                });
              } else {
                console.log("I would prescribe you take enough rest in a mildly lit room with nature sounds and drink a glass of water or preferably speak to a physician.");
              }
            });
          }
        });
      }
      // Handle other ailments and options here...

      rl.close();
    });
  });
}

main();
