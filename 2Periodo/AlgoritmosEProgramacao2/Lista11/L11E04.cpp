#include <stdio.h>
#include <locale.h>

void calcesfera(float R, float *Area, float *Volume) {
	*Area = 4 * 3.1415 * R * R;
	*Volume = (4 * 3.1415 * R * R * R) / (3);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float Raio, *PRaio, Area, *PArea, Volume, *PVolume;
	
	PRaio = &Raio;
	PArea = &Area;
	PVolume = &Volume;
	
	printf("Digite o raio da esfera: ");
	scanf("%f", &Raio);
	
	calcesfera(Raio, &Area, &Volume);
	
	printf("Área da esfera: %.2f\n", Area);
	printf("Volume da esfera: %.2f", Volume);
	
	return 0;
}
