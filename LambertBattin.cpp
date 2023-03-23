//
// Created by daarmas on 22/03/2023.
//

#include "LambertBattin.h"

void LambertBattin(double *ro, double *r, char *dm, double Dtsec, double *v0, double *v) {
    double small = 0.000001;
    double mu = 3.986004418e14;   // m3/s2
    double y1 = 0;
    double magr = norm(r, 3);
    double magro = norm(ro, 3);
    double CosDeltaNu= dot(ro,r, 3)/(magro*magr);
    double rcrossr[3]; cross(ro,r,rcrossr);
    double magrcrossr = norm(rcrossr, 3);
    double SinDeltaNu;
    if (strcmp(dm,"pro")) SinDeltaNu = magrcrossr/(magro*magr);
    else SinDeltaNu = -magrcrossr/(magro*magr);

    double DNu = atan2(SinDeltaNu,CosDeltaNu);

    if (DNu < 0.0) DNu = 2.0*M_PI+DNu;

    double RoR   = magr/magro;
    double eps   = RoR - 1.0;
    double tan2w = 0.25*eps*eps / ( sqrt( RoR ) + RoR * ( 2.0 + sqrt( RoR ) ) );
    double rp    = sqrt( magro*magr )*( (cos(DNu*0.25))*cos(DNu*0.25)) + tan2w ;

    double L;
    if ( DNu < M_PI ) L = ( (sin(DNu*0.25))*(sin(DNu*0.25)) + tan2w ) /( (sin(DNu*0.25))*(sin(DNu*0.25)) + tan2w + cos( DNu*0.5 ) );
    else L = ( (cos(DNu*0.25))*(cos(DNu*0.25)) + tan2w - cos( DNu*0.5 ) ) /( (cos(DNu*0.25))*(cos(DNu*0.25)) + tan2w );

    double m    = mu*Dtsec*Dtsec / ( 8.0*rp*rp*rp );
    double x    = 10.0;
    double xn   = L;
    double chord= sqrt( magro*magro + magr*magr - 2.0*magro*magr*cos( DNu ) );
    double s    = ( magro + magr + chord )*0.5;
    double lim1 = sqrt(m/L);

    //LINEA 68 DE LAMBERTBATTIN
}
