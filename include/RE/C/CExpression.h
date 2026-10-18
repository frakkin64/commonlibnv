#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/E/EXPRESSION_ERROR.h"
#include "RE/E/EXPRESSION_OPERATORS.h"
#include "RE/E/ExpressionOperand.h"
#include "RE/S/Stack.h"

namespace RE
{
	class Script;
	class ScriptLocals;
	class TESObjectREFR;

	class CExpression
	{
	public:
		CExpression* ctor()
		{
			using func_t = CExpression*(__thiscall*)(CExpression*);
			static REL::Relocation<func_t> func{ Offsets::CExpression::ctor };
			return func(this);
		}

		char* InfixToPostfix(char* apInfix, std::uint32_t& auiSize)
		{
			using func_t = decltype(&CExpression::InfixToPostfix);
			static REL::Relocation<func_t> func{ Offsets::CExpression::InfixToPostfix };
			return func(this, apInfix, auiSize);
		}

		std::uint32_t GetNextToken(char** appInput, char* apToken, EXPRESSION_OPERATORS& aeOperator, bool abEndian, char** apScriptData)
		{
			using func_t = decltype(&CExpression::GetNextToken);
			static REL::Relocation<func_t> func{ Offsets::CExpression::GetNextToken };
			return func(this, appInput, apToken, aeOperator, abEndian, apScriptData);
		}

		double Eval(char const* sptr, TESObjectREFR* apFunctionOwner, TESObjectREFR* apContainer, Script* script, ScriptLocals* scriptLocals, std::int32_t postfixSize, bool abEndian)
		{
			using func_t = decltype(&CExpression::Eval);
			static REL::Relocation<func_t> func{ Offsets::CExpression::Eval };
			return func(this, sptr, apFunctionOwner, apContainer, script, scriptLocals, postfixSize, abEndian);
		}

	private:
		void SetError(EXPRESSION_ERROR errorCode)
		{
			using func_t = decltype(&CExpression::SetError);
			static REL::Relocation<func_t> func{ Offsets::CExpression::SetError };
			func(this, errorCode);
		}

	public:
		// members
		EXPRESSION_ERROR                m_ExpressionError;  // 00
		char                            m_Infix[512];       // 04
		char                            m_Postfix[512];     // 204
		Stack<EXPRESSION_OPERATORS, 64> m_charStack;        // 404
		Stack<ExpressionOperand, 32>    m_operandStack;     // 508
	};
}
