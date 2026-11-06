#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LocalArc : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalArc(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LocalArc") {}
    public:
        void Clear(int capacity) const { void* __callArgs[] = { &capacity }; Call("Clear", __callArgs, 1); }
        int CastIndex(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("CastIndex", __callArgs, 1); }
        int MemberIndex(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("MemberIndex", __callArgs, 1); }
        bool Involves(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("Involves", __callArgs, 1); }
        int CopyBeats(void* dst) const { void* __callArgs[] = { dst }; return CallValue<int>("CopyBeats", __callArgs, 1); }
        void SetBeats(void* src) const { void* __callArgs[] = { src }; Call("SetBeats", __callArgs, 1); }
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int titleForm() const { return ReadField<int>("titleForm"); }
        void titleForm(int value) const { WriteField<int>("titleForm", value); }
        void* titlePlace() const { return ReadField<void*>("titlePlace"); }
        void titlePlace(void* value) const { WriteField<void*>("titlePlace", value); }
        uint8_t titleOrdinal() const { return ReadField<uint8_t>("titleOrdinal"); }
        void titleOrdinal(uint8_t value) const { WriteField<uint8_t>("titleOrdinal", value); }
        int subjectId() const { return ReadField<int>("subjectId"); }
        void subjectId(int value) const { WriteField<int>("subjectId", value); }
        int otherId() const { return ReadField<int>("otherId"); }
        void otherId(int value) const { WriteField<int>("otherId", value); }
        int recordId() const { return ReadField<int>("recordId"); }
        void recordId(int value) const { WriteField<int>("recordId", value); }
        int openedTick() const { return ReadField<int>("openedTick"); }
        void openedTick(int value) const { WriteField<int>("openedTick", value); }
        int closedTick() const { return ReadField<int>("closedTick"); }
        void closedTick(int value) const { WriteField<int>("closedTick", value); }
        int lastBeatTick() const { return ReadField<int>("lastBeatTick"); }
        void lastBeatTick(int value) const { WriteField<int>("lastBeatTick", value); }
        int anchorTile() const { return ReadField<int>("anchorTile"); }
        void anchorTile(int value) const { WriteField<int>("anchorTile", value); }
        float salience() const { return ReadField<float>("salience"); }
        void salience(float value) const { WriteField<float>("salience", value); }
        bool open() const { return ReadField<bool>("open"); }
        void open(bool value) const { WriteField<bool>("open", value); }
        int beatTotal() const { return ReadField<int>("beatTotal"); }
        void beatTotal(int value) const { WriteField<int>("beatTotal", value); }
        void* cast() const { return ReadField<void*>("cast"); }
        void* members() const { return ReadField<void*>("members"); }
        void* beats() const { return ReadField<void*>("beats"); }
        void beats(void* value) const { WriteField<void*>("beats", value); }
        int beatCount() const { return ReadField<int>("beatCount"); }
        void beatCount(int value) const { WriteField<int>("beatCount", value); }
        int beatHead() const { return ReadField<int>("beatHead"); }
        void beatHead(int value) const { WriteField<int>("beatHead", value); }
    };
}
