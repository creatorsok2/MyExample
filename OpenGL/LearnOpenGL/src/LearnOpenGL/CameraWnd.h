#pragma once

#include "IncludeHeader.h"
#include "FrameWnd.h"

class CCameraWnd : public frm::CFrameWnd
{
public:
	CCameraWnd();
	virtual ~CCameraWnd() = default;

private:
	virtual void WindowProperty() override;
	virtual void InitRender() override;
	virtual void ReleaseRender() override;
	virtual void PreDraw() override;
	virtual void Draw() override;
	virtual void ProcessInput() override;

private:
	void framebuffer_size_callback(GLFWwindow* window, int width, int height);
	void mouse_callback(GLFWwindow* window, double xpos, double ypos);
	void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);

private:
	Shader ourShader;
	unsigned int VBO, VAO;
	unsigned int texture1, texture2;

	// camera
	Camera camera;
	float lastX;
	float lastY;
	bool firstMouse;

	// timing
	float deltaTime;
	float lastFrame;

};

