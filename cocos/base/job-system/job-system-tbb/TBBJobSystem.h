#pragma once

namespace cc {

class JobSystem {
public:

    JobSystem() noexcept {}
    ~JobSystem() = default;
    JobSystem(JobSystem const&) = delete;
    JobSystem(JobSystem&&) = delete;
    JobSystem& operator=(JobSystem const&) = delete;
    JobSystem& operator=(JobSystem&&) = delete;

private:

};

} // namespace cc
