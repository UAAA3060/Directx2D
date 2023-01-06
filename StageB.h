#pragma once
#include "Scene.h"
class CStageB :
	public CScene
{
public:
	explicit CStageB();
	virtual ~CStageB();
public:
	// CScene을(를) 통해 상속됨
	virtual HRESULT Ready_Scene() override;
	virtual void Update_Scene() override;
	virtual void Render_Scene() override;
	virtual void Release_Scene() override;
private:
	CGameObject_Manager* m_pGameObject_Manager;


};

