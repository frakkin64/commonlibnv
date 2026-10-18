#include "NVSE/Interfaces.h"

#include "NVSE/API.h"

namespace NVSE
{
	bool MessagingInterface::RegisterListener(EventCallback a_handler, const char* a_sender) const
	{
		return GetProxy().RegisterListener(GetPluginHandle(), a_sender, a_handler);
	}

	bool MessagingInterface::Dispatch(std::uint32_t a_type, void* a_data, std::uint32_t a_dataLen, const char* a_receiver) const
	{
		return GetProxy().Dispatch(GetPluginHandle(), a_type, a_data, a_dataLen, a_receiver);
	}

	void SerializationInterface::SetSaveCallback(EventCallback a_callback) const
	{
		GetProxy().SetSaveCallback(GetPluginHandle(), a_callback);
	}

	void SerializationInterface::SetLoadCallback(EventCallback a_callback) const
	{
		GetProxy().SetLoadCallback(GetPluginHandle(), a_callback);
	}

	void SerializationInterface::SetNewGameCallback(EventCallback a_callback) const
	{
		GetProxy().SetNewGameCallback(GetPluginHandle(), a_callback);
	}

	void SerializationInterface::SetPreLoadCallback(EventCallback a_callback) const
	{
		GetProxy().SetPreLoadCallback(GetPluginHandle(), a_callback);
	}
}
