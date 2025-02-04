﻿#ifndef __RPCH2D_CREATEACTORHALL2DB_H__
#define __RPCH2D_CREATEACTORHALL2DB_H__

// generate by ProtoGen at date: 2020/9/8 14:07:25

#include "crpc.h"
#include "pb/project.pb.h"

using namespace CBR;

#define RPCH2D_CREATEACTORHALL2DB_TYPE 48460

class RpcH2D_CreateActorHall2Db : public CRpc
{
private:

	RpcH2D_CreateActorHall2Db():CRpc(RPCH2D_CREATEACTORHALL2DB_TYPE)
	{
        m_dwTimeout = 5000;
		m_ArgPtr = &m_oArg;
		m_ResPtr = &m_oRes;
	}

public:
	static RpcH2D_CreateActorHall2Db *CreateRpc()
	{
		return new RpcH2D_CreateActorHall2Db;
	}

	virtual RpcEndType GetEndType() const;
	virtual void Process(UINT32 dwConnID);

private:
	// implemention as client
	void OnReply(const CreateActorReq &roArg, const CreateActorRes &roRes, const CUserData &roUserData);
	void OnTimeout(const CreateActorReq &roArg, const CUserData &roUserData);

	// implemention as server
	void OnCall(const CreateActorReq &roArg, CreateActorRes &roRes);
	void OnDelayReplyRpc(const CreateActorReq &roArg, CreateActorRes &roRes, const CUserData &roUserData);

	virtual void OnReplyTimeout() 
	{ 
		OnTimeout(m_oArg, m_oUser); 
	}

	virtual void OnDelayRpc(const CUserData &userData)
	{
		OnDelayReplyRpc( m_oArg, m_oRes, userData);
	}

	virtual CRpc *NewRpc() 
	{
		return CreateRpc();
	}

public:
	CreateActorReq m_oArg;
	CreateActorRes m_oRes;
};

#endif
