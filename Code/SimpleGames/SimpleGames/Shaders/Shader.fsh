//
//  Shader.fsh
//  SimpleGames
//
//  Created by Linh Nguyen on 18.07.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
