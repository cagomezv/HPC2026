# ⚙️ Sistemas Distribuidos (Computación de Alto Desempeño para Física)

**Facultad:** Facultad de Ciencias Matemáticas y Naturales  
**Proyecto Curricular:** Física  
**Tipo de asignatura:** Teórico–Práctica  
**Modalidad:** Presencial con incorporación de TIC  
**Créditos académicos:** 3  

**Distribución horaria:**
- HTD: 4
- HTC: 2
- HTA: 3

---

## 📌 Descripción del curso
El curso **Sistemas Distribuidos** introduce los fundamentos y técnicas de la **Computación de Alto Desempeño (HPC)** aplicadas a la resolución de problemas complejos en física. Se enfoca en el diseño, implementación y optimización de algoritmos paralelos y distribuidos, permitiendo a los estudiantes acelerar simulaciones numéricas y manejar grandes volúmenes de datos científicos.

A lo largo del curso se abordan arquitecturas de memoria compartida y distribuida, optimización de código, álgebra lineal dispersa y programación paralela con **OpenMP** y **MPI**, integrando estos conceptos en aplicaciones reales de la física computacional.

---

## 🧭 Justificación
La física contemporánea depende fuertemente de simulaciones numéricas intensivas y del procesamiento eficiente de grandes cantidades de datos. En áreas como dinámica de fluidos, física de materiales, astrofísica, biofísica y física estadística, muchos problemas son computacionalmente intratables sin el uso de plataformas paralelas y distribuidas.

Este curso proporciona a los estudiantes las competencias necesarias para implementar algoritmos eficientes en arquitecturas modernas de cómputo, optimizar el uso de memoria y recursos computacionales, y reducir significativamente los tiempos de ejecución de simulaciones físicas. Además, fortalece habilidades clave para la investigación científica, la industria tecnológica y campos emergentes como la inteligencia artificial y la computación cuántica.

El enfoque en trabajo colaborativo, optimización de rendimiento y comunicación de resultados científicos prepara a los estudiantes para participar activamente en proyectos de investigación y desarrollo que requieren un dominio profundo de la computación científica moderna.

---

## 🎯 Objetivos del curso

### Objetivo general
Desarrollar en los estudiantes habilidades para la implementación, optimización y aplicación de métodos de **computación de alto desempeño (HPC)** en la resolución de problemas complejos de física, integrando programación paralela, estructuras de datos dispersas y algoritmos eficientes.

### Objetivos específicos
- Comprender y aplicar principios fundamentales de HPC para la optimización de código y el manejo eficiente de memoria.
- Desarrollar simulaciones numéricas en entornos de cómputo paralelo utilizando **OpenMP** y **MPI**.
- Implementar y analizar algoritmos de álgebra lineal dispersa para problemas físicos de gran escala.
- Analizar y comunicar resultados de simulaciones mediante reportes técnicos y visualización de datos.

---

## 🎓 Propósitos de Formación y Aprendizaje (PFA)
Al finalizar el curso, el estudiante será capaz de:

1. Implementar y optimizar algoritmos de alto desempeño para la simulación de fenómenos físicos complejos.
2. Diseñar y ejecutar experimentos computacionales en entornos de HPC, validando resultados con metodologías rigurosas.
3. Desarrollar habilidades de autoformación y actualización en computación científica avanzada.
4. Participar en proyectos de investigación y desarrollo que involucren cómputo distribuido y manejo de grandes volúmenes de datos.
5. Comunicar de manera efectiva procesos y resultados de simulaciones mediante reportes técnicos y visualizaciones científicas.

---

## 📎 Requisitos y conocimientos previos
- Programación en C/C++ o Python
- Álgebra lineal
- Métodos numéricos básicos
- Física computacional (recomendado)

---

## 🛠️ Herramientas y entorno de trabajo
- **Lenguajes:** C, C++, Python
- **Compiladores:** GCC, Clang
- **Paralelismo:** OpenMP, MPI (MPICH u OpenMPI)
- **Librerías científicas:** BLAS, LAPACK
- **Optimización y depuración:** Valgrind, GDB, Perf
- **Herramientas adicionales:** METIS, Make, CMake, Git
- **Entorno:** Linux (preferiblemente Debian) y Windows
- **Opcional:** Slurm, Docker

---

## 📚 Contenidos temáticos

### 🟢 Semana 1: Introducción a HPC
- Motivación y aplicaciones de HPC en física.
- Arquitecturas paralelas.
- Memoria compartida vs. distribuida.
- Clusters y supercomputadoras.

### 🟡 Semanas 2–4: Optimización de código
- Arquitectura de procesadores modernos.
- Uso eficiente de caché y memoria.
- Directivas de compilación.
- Debug vs. release.
- Sobrecarga de operadores y costos computacionales.

### 🔵 Semanas 5–6: Álgebra lineal y matrices dispersas
- Matrices ralas y formatos CRS/CCS.
- Sistemas de ecuaciones dispersos.
- Gradiente conjugado.
- Precondicionamiento y estabilidad numérica.

### 🟣 Semanas 7–9: Paralelismo con OpenMP
- Programación con threads.
- Paralelización de bucles.
- Reducciones y secciones críticas.
- Speed-up y ley de Amdahl.
- NUMA y false-sharing.

### 🟠 Semanas 10–12: Factorización y precondicionamiento
- Cholesky simbólica y numérica.
- Reordenamientos con METIS.
- Factorizaciones incompletas.
- Métodos biconjugados y precondicionadores avanzados.

### 🔴 Semanas 13–15: Paralelismo con MPI
- Programación en memoria distribuida.
- Comunicación bloqueante y no bloqueante.
- Gradiente conjugado con MPI.
- Particionamiento de dominios.
- Complemento de Schur.

### ⚙️ Semana 16: Temas avanzados (opcionales)
- Método alternante de Schwarz.
- Colorización de elementos.

---

## 🧠 Estrategias de enseñanza-aprendizaje
- Aprendizaje activo y resolución de problemas.
- Proyectos prácticos de HPC.
- Simulación y verificación de resultados.
- Estudios de caso en física computacional.
- Trabajo colaborativo en equipos.
- Uso de recursos en línea y documentación técnica.

---

## 📈 Evaluación
- Participación y actividades prácticas.
- Proyectos de práctica.
- Proyecto final.
- Informe técnico y presentación.

---

## 🔬 Prácticas académicas
Incluyen optimización de código, paralelización con OpenMP y MPI, resolución de sistemas de ecuaciones dispersas, análisis de rendimiento y desarrollo de un modelo físico optimizado usando técnicas de HPC.

---

## 📖 Bibliografía básica
- Coulouris et al., *Distributed Systems – Concepts and Design*
- Tanenbaum & Van Steen, *Distributed Systems*
- Gropp et al., *Using MPI*
- Pacheco, *An Introduction to Parallel Programming*
- Chapman et al., *Using OpenMP*
- Saad, *Iterative Methods for Sparse Linear Systems*

---

## 🌐 Recursos web
- OpenMP: https://www.openmp.org
- MPI Forum: https://www.mpi-forum.org
- Intel Optimization Manuals
- NVIDIA CUDA Documentation
