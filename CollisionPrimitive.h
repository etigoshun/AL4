#pragma once

/// <summary>
/// 当たり判定プリミティブ
/// </summary>

#include <DirectXMath.h>

using namespace DirectX;

/// <summary>
/// 球
/// </summary>
struct Sphere
{
	//中心座標
	XMVECTOR center = { 0,0,0,1 };
	//半径
	float radius = 1.0f;
};

struct Plane
{
	//法線ベクトル
	XMVECTOR normal = { 0,1,0,0 };
	//原点(0,0,0)からの距離
	float distance = 0.0f;
};

/// <summary>
/// 法線付き三角形(時計回りが表面)
/// </summary>
class Triangle
{
public:
	//頂点座標3つ
	XMVECTOR p0;
	XMVECTOR p1;
	XMVECTOR p2;
	//法線ベクトル
	XMVECTOR normal;
};