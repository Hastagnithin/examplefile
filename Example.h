/**
 * @file Example.h
 * @author John Doe
 * @date 2021-01-01
 * @brief Brief description of the header file.
 *
 * Detailed description of the header file and its contents.
 */

#ifndef EXAMPLE_H
#define EXAMPLE_H

/**
 * @brief A brief description of the class.
 *
 * A detailed description of the class and its members.
 */
class Example
{
public:
    /**
     * @brief A brief description of the constructor.
     *
     * A detailed description of the constructor and its parameters.
     *
     * @param[in] x An example parameter.
     * @param[in] y Another example parameter.
     */
    Example(int x, int y);

    /**
     * @brief A brief description of the method.
     *
     * A detailed description of the method and its return value.
     *
     * @return The result of the operation.
     */
    int Method();

private:
    int m_x; /**< A brief description of the member variable. */
    int m_y; /**< Another brief description of the member variable. */
};

#endif // EXAMPLE_H
