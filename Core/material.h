#pragma once

#include "vec_math.h"
#include <glm/glm.hpp>

class Material
{
public:
	enum Type
	{
		Lambertian = 0,
		Metal,
		Dielectric
	};

	Material(Type type, const glm::vec3& albedo = glm::vec3(0.0f), float fuzz = 0, float ir = 0)
		: m_type(type), m_albedo(albedo), m_fuzz(fuzz), m_ir(ir)
	{
	}



	inline const Type GetType() const { return m_type; }
	inline float3 GetAlbedo() const { return make_float3(m_albedo.r, m_albedo.g, m_albedo.b); }
	inline const float GetFuzz() const { return m_fuzz; }
	inline const float GetIR() const { return m_ir; }

private:
	Type m_type;
	glm::vec3 m_albedo;
	float m_fuzz;
	float m_ir;
};



