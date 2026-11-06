#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Player
{
    class PlayerMilitaryManager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PlayerMilitaryManager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Player", "PlayerMilitaryManager") {}
    public:
        int DismissOverdueLevies() const { return CallValue<int>("DismissOverdueLevies", nullptr, 0); }
        int RecruitSlotsAt(int stateId) const { void* args[] = { &stateId }; return CallValue<int>("RecruitSlotsAt", args, 1); }
        void GetRecruitStates(void* into) const { void* args[] = { into }; Call("GetRecruitStates", args, 1); }
        bool IsRecruitState(int stateId) const { void* args[] = { &stateId }; return CallValue<bool>("IsRecruitState", args, 1); }
        int StateAtTile(int tileIndex) const { void* args[] = { &tileIndex }; return CallValue<int>("StateAtTile", args, 1); }
        int StateOfCity(int cityId) const { void* args[] = { &cityId }; return CallValue<int>("StateOfCity", args, 1); }
        void* FindCity(int cityId) const { void* args[] = { &cityId }; return Call("FindCity", args, 1); }
        void* SeatCityOf(int stateId) const { void* args[] = { &stateId }; return Call("SeatCityOf", args, 1); }
        void* StateName(int stateId) const { void* args[] = { &stateId }; return Call("StateName", args, 1); }
        int TypesQueuedAt(int stateId) const { void* args[] = { &stateId }; return CallValue<int>("TypesQueuedAt", args, 1); }
        bool CanQueueAt(int stateId, int type) const { void* args[] = { &stateId, &type }; return CallValue<bool>("CanQueueAt", args, 2); }
        bool RaisesType(int stateId, int type) const { void* args[] = { &stateId, &type }; return CallValue<bool>("RaisesType", args, 2); }
        int TrainingCountIn(int stateId) const { void* args[] = { &stateId }; return CallValue<int>("TrainingCountIn", args, 1); }
        float TrainingSpeedOf(int stateId) const { void* args[] = { &stateId }; return CallValue<float>("TrainingSpeedOf", args, 1); }
        float StateCostMulAt(int stateId) const { void* args[] = { &stateId }; return CallValue<float>("StateCostMulAt", args, 1); }
        float TrainingPowerOf(int stateId) const { void* args[] = { &stateId }; return CallValue<float>("TrainingPowerOf", args, 1); }
        float TrainingPowerAtCity(int cityId) const { void* args[] = { &cityId }; return CallValue<float>("TrainingPowerAtCity", args, 1); }
        bool Enqueue(int type, int count, int stateId) const { void* args[] = { &type, &count, &stateId }; return CallValue<bool>("Enqueue", args, 3); }
        bool Enqueue(int templateId, int count, int stateId) const { void* args[] = { &templateId, &count, &stateId }; return CallValue<bool>("Enqueue", args, 3); }
        float PendingHeads(int kind) const { void* args[] = { &kind }; return CallValue<float>("PendingHeads", args, 1); }
        void* TemplateOf(void* line, void* unit) const { void* args[] = { line, unit }; return Call("TemplateOf", args, 2); }
        void* LineTemplate(void* line) const { void* args[] = { line }; return Call("LineTemplate", args, 1); }
        void CancelEntry(void* entry) const { void* args[] = { entry }; Call("CancelEntry", args, 1); }
        void AdjustCount(void* entry, int delta) const { void* args[] = { entry, &delta }; Call("AdjustCount", args, 2); }
        bool RedirectEntry(void* entry, int stateId) const { void* args[] = { entry, &stateId }; return CallValue<bool>("RedirectEntry", args, 2); }
        int Draft(int type, int count, int stateId, void* lastFailure) const { void* args[] = { &type, &count, &stateId, &lastFailure }; return CallValue<int>("Draft", args, 4); }
        int Draft(int templateId, int count, int stateId, void* lastFailure) const { void* args[] = { &templateId, &count, &stateId, &lastFailure }; return CallValue<int>("Draft", args, 4); }
        void SetOverlaysVisible(bool visible) const { void* args[] = { &visible }; Call("SetOverlaysVisible", args, 1); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        float progress() const { return ReadField<float>("progress"); }
        void SetProgress(float value) const { WriteField<float>("progress", value); }
        bool started() const { return ReadField<bool>("started"); }
        void SetStarted(bool value) const { WriteField<bool>("started", value); }
        int templateId() const { return ReadField<int>("templateId"); }
        void SetTemplateId(int value) const { WriteField<int>("templateId", value); }
        void* issue() const { return ReadField<void*>("issue"); }
        void SetIssue(void* value) const { WriteField<void*>("issue", value); }
        int type() const { return ReadField<int>("type"); }
        void SetType(int value) const { WriteField<int>("type", value); }
        void* units() const { return ReadField<void*>("units"); }
        int stateId() const { return ReadField<int>("stateId"); }
        void SetStateId(int value) const { WriteField<int>("stateId", value); }
        void* stallReason() const { return ReadField<void*>("stallReason"); }
        void SetStallReason(void* value) const { WriteField<void*>("stallReason", value); }
        bool waitingOnFunds() const { return ReadField<bool>("waitingOnFunds"); }
        void SetWaitingOnFunds(bool value) const { WriteField<bool>("waitingOnFunds", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
        float stamp() const { return ReadField<float>("stamp"); }
        void SetStamp(float value) const { WriteField<float>("stamp", value); }
        int owner() const { return ReadField<int>("owner"); }
        void SetOwner(int value) const { WriteField<int>("owner", value); }
        int generation() const { return ReadField<int>("generation"); }
        void SetGeneration(int value) const { WriteField<int>("generation", value); }
        int seatCityId() const { return ReadField<int>("seatCityId"); }
        void SetSeatCityId(int value) const { WriteField<int>("seatCityId", value); }
        float trainingPower() const { return ReadField<float>("trainingPower"); }
        void SetTrainingPower(float value) const { WriteField<float>("trainingPower", value); }
        int trainingVersion() const { return ReadField<int>("trainingVersion"); }
        void SetTrainingVersion(int value) const { WriteField<int>("trainingVersion", value); }
    };
}
