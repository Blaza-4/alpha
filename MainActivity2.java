package com.example.multiregversion2;

import androidx.activity.result.ActivityResult;
import androidx.activity.result.ActivityResultCallback;
import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.contract.ActivityResultContract;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity2 extends AppCompatActivity {
     Button reg_btn;
     TextView log_btn;
     EditText user,mail,pho,pass;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main2);
        user =findViewById(R.id.username);
        mail =findViewById(R.id.email);
        pho = findViewById(R.id.phone);
        pass =findViewById(R.id.password);
        reg_btn = findViewById(R.id.sign);
        log_btn = findViewById(R.id.login_btn);
        reg_btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
               Intent login = new Intent(getApplicationContext(), MainActivity.class);
               Bundle data = new Bundle();
               data.putString("username",user.getText().toString().trim());
               data.putString("password",pass.getText().toString().trim());
               login.putExtras(data);
               setResult(101,login);
               finish();
            }
        });
        log_btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent log = new Intent(getApplicationContext(),MainActivity.class);
                setResult(102,log);
                finish();
            }
        });
    }
}