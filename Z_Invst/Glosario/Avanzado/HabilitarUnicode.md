[Volver al índice](../../../README.md)

**¿Por qué es importante definir UNICODE?**
En la API de Windows, muchas funciones tienen dos versiones:
Una que trabaja con ANSI / multibyte characters (MessageBoxA, CreateFileA, etc.).

Otra que trabaja con Unicode / wide characters (UTF-16) (MessageBoxW, CreateFileW, etc.).

Cuando defines la macro UNICODE, Windows automáticamente redirige funciones genéricas como MessageBox a su versión Unicode: MessageBoxW.

**¿Qué pasa si no usas UNICODE?**
Cuando NO defines UNICODE, estás diciendo al compilador que use la versión ANSI (también llamada "multibyte") de las funciones de la API de Windows, en lugar de las versiones Unicode (UTF-16).

**¿Por qué SÍ deberías usar Unicode?**
Unicode es el estándar moderno, y tiene muchas ventajas:

| Motivo                         | Beneficio                                                                                  |
| ------------------------------ | ------------------------------------------------------------------------------------------ |
| Internacionalización           | Puedes usar caracteres de cualquier idioma (español, japonés, chino, árabe, emojis, etc.). |
| Compatibilidad con nuevas APIs | Muchas APIs modernas requieren o prefieren `wchar_t` / Unicode.                            |
| Estándar para Windows          | Microsoft recomienda usar Unicode desde Windows XP.                                        |

**Puedes quitar UNICODE si:**

- Solo usas caracteres ASCII.
- Quieres trabajar con char\* y std::string por simplicidad.
- Tienes librerías antiguas que no usan wchar_t.
- Pero en general, es mejor dejar UNICODE activado para hacer tu aplicación más moderna, compatible y preparada para múltiples idiomas.

🧠 Frase para recordar:
Definir UNICODE es decirle al compilador: “Usa las funciones modernas de Windows que soportan texto internacional.”
